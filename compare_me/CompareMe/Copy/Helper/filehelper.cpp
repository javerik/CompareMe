#include "filehelper.h"
#include <QDir>
#include <QDebug>
fileHelper::fileHelper(QObject *parent, propertyClass *p) :
    QThread(parent)
{

    this->_pClass = p;
}

void fileHelper::run()
{
    if (!this->_pClass->_hashSafety) {
        defaultCopy();
    }else if (this->_pClass->_hashSafety) {
        hashSafeCopy();
    }
//    emit Update(0,"Start copy missing Files",this->_result->GetAnalyse().MissingFilesNew.size());

//    //Copy missing files
//    int counter= 0;

//    foreach (QString file, this->_result->GetAnalyse().MissingFilesNew) {

//        counter++;

//        QString tempCleanedPath = file.replace(this->_result->GetAnalyse().OldBasePath,"");

//        QString tempNewPath = this->_result->GetAnalyse().NewBasePath + tempCleanedPath;

//        emit Update(counter,"Position:" + QString::number(counter) + "Executing File:" + tempNewPath,-1);

//        QFile tempFile(tempNewPath);
//        if (!tempFile.exists()) {

//            QString sourceFile = this->_result->GetAnalyse().OldBasePath +file;


//            if (QFile::copy(sourceFile,tempNewPath)) {
//                emit Update(counter,"File Copied!",-1);
//            }else
//            {
//                emit Update(counter,"Error could not copy file:" + file,-1);
//            }
//        }


//    }

//    emit FinishTask();


}

/**
 * @brief fileHelper::defaultCopy
 * copies all missingFiles without safety check
 */
void fileHelper::defaultCopy()
{
    emit Update(0,"Start copy missing Files",this->_result->GetAnalyse().MissingFilesNew.size());

    //Copy missing files
    int counter= 0;

    foreach (QString file, this->_result->GetAnalyse().MissingFilesNew) {

        counter++;

        QString tempCleanedPath = file.replace(this->_result->GetAnalyse().OldBasePath,"");

        QString tempNewPath = this->_result->GetAnalyse().NewBasePath + tempCleanedPath;

        emit Update(counter,"Position:" + QString::number(counter) + "Executing File:" + tempNewPath,-1);

        QFile tempFile(tempNewPath);
        if (!tempFile.exists()) {

            QString sourceFile = this->_result->GetAnalyse().OldBasePath +file;


            if (QFile::copy(sourceFile,tempNewPath)) {
                emit Update(counter,"File Copied!",-1);
            }else
            {
                emit Update(counter,"Error could not copy file:" + file,-1);
            }
        }


    }

    emit FinishTask();
}

/**
 * @brief fileHelper::hashSafeCopy
 * Copies all missing files with sha1 hash check
 */
void fileHelper::hashSafeCopy()
{
    emit Update(0,"Start copy missing Files with sha1 Checksum",this->_result->GetAnalyse().MissingFilesNew.size());

    //Copy missing files
    int counter= 0;

    foreach (QString file, this->_result->GetAnalyse().MissingFilesNew) {

        counter++;

        QString tempCleanedPath = file.replace(this->_result->GetAnalyse().OldBasePath,"");

        QString tempNewPath = this->_result->GetAnalyse().NewBasePath + tempCleanedPath;

        emit Update(counter,"Position:" + QString::number(counter) + "Executing File:" + tempNewPath,-1);

        QFile tempFile(tempNewPath);
        if (!tempFile.exists()) {

            QString sourceFile = this->_result->GetAnalyse().OldBasePath +file;

            //Generate hash
            QString tempHash = _hashHelper.GenerateHash(sourceFile);

            if (QFile::copy(sourceFile,tempNewPath)) {
                emit Update(counter,"File Copied! / Checking Hash..",-1);

                int tries =0;
                bool error = false;
                while(_hashHelper.GenerateHash(tempNewPath) != tempHash)
                {
                    tries++;
                    if (!QFile::copy(sourceFile,tempNewPath)) {
                        emit Update(counter,"Error could not copy file:" + file,-1);
                        error = true;
                        break;
                    }
                    if (tries > 5) {
                        emit Update(counter,"Error hash sha1 is invalid" + file,-1);
                        error = true;
                        break;
                    }
                }

                if (!error) {
                    emit Update(counter,"Hash-Check OK" + tempHash,-1);
                }


            }else
            {
                emit Update(counter,"Error could not copy file:" + file,-1);
            }
        }


    }

    emit FinishTask();
}

bool fileHelper::CopyFile(const QString& sourceFile, const QString& destinationDir)
{
    QFileInfo fileInfo(sourceFile);
    QString destinationFile = destinationDir + QDir::separator() + fileInfo.fileName();
    bool result = QFile::copy(sourceFile, destinationFile);
    return result;
}
