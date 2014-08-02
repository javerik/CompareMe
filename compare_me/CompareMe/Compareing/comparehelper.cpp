#include "comparehelper.h"

CompareHelper::CompareHelper(QObject *parent) :
    QThread(parent)
{
}


void CompareHelper::SetData(QString oldDir, QString newDir)
{
    this->_oldDir = oldDir;
    this->_newDir = newDir;
}

void CompareHelper::run()
{

    this->_dirHelper = new DirectorieHelper;

    //Get all Directories

    emit Update(0,"Get all directorys from the sourceFile",-1);
    QStringList allDirsOld = _dirHelper->GetAllDirsWithSub(this->_oldDir);
    emit Update(0,"Get all directorys from the compare Folder",-1);
    QStringList allDirsNew = _dirHelper->GetAllDirsWithSub(this->_newDir);

    CompareItem oldItem;
    oldItem.Folder = allDirsOld;

    oldItem.BasePath = this->_oldDir;


    CompareItem newItem;
    newItem.Folder = allDirsNew;
    newItem.BasePath = this->_newDir;
    CompareAnalyse analyse = DoAnalyse(oldItem,newItem);

    this->_result = new CompareResult(false,analyse);
    emit AFinish();

}

CompareResult* CompareHelper::GetData()
{
    return this->_result;
}

CompareAnalyse CompareHelper::DoAnalyse(CompareItem oldI,CompareItem newI)
{
    emit Update(0,"...",-1);
    CompareAnalyse tempAnalyse;

    int counter = 0;

    //Add the BasePaths
    tempAnalyse.OldBasePath = oldI.BasePath;
    tempAnalyse.NewBasePath = newI.BasePath;

    //Create First Analyse


    //Get all Files
    QStringList allFilesOld;
    emit Update(0,"Get all files from sourceFolder",oldI.Folder.size());

    //Get files in BaseDir

    QStringList tempOldBaseFile = _dirHelper->GetAllFiles(oldI.BasePath);
    allFilesOld.operator +=(tempOldBaseFile);

    counter = 0;
    foreach (QString s, oldI.Folder) {
        counter++;
        QStringList tempFiles = _dirHelper->GetAllFiles(s);

        allFilesOld.operator +=(tempFiles);
        emit Update(counter,"read files...",-1);

    }

    tempAnalyse.FolderCountOld = oldI.Folder.size() - 1;
    tempAnalyse.FileCountOld = allFilesOld.size() -1;


    //Create Second Analyse
    QString rStr = oldI.BasePath;
    rStr += "/";

    QString rStr2 = newI.BasePath;
    rStr2 += "/";

    //Get all Files
    QStringList allFilesNew;

    QStringList tempNewBaseFiles = _dirHelper->GetAllFiles(newI.BasePath);
    allFilesNew.operator +=(tempNewBaseFiles);


    emit Update(0,"Get all files from compare folder",newI.Folder.size());
    counter = 0;
    foreach (QString s, newI.Folder) {
        counter++;
        QStringList tempFiles = _dirHelper->GetAllFiles(s);

        allFilesNew.operator +=(tempFiles);
        emit Update(counter,"...",-1);
    }
    tempAnalyse.FolderCountNew = newI.Folder.size() -1;
    tempAnalyse.FileCountNew = allFilesNew.size() -1;



    //Create CleanLists

    QStringList cleanOldFolder;

    QStringList cleanNewFolder;

    QStringList cleanOldFiles;
    QStringList cleanNewFiles;

    //CleanOldFolderList
    counter =0;
    emit Update(0,"Clean old..",oldI.Folder.size());
    foreach (QString s, oldI.Folder) {
        counter++;
        cleanOldFolder << s.replace(rStr,"");
        emit Update(counter,"...",newI.Folder.size());
    }

    //CleanNewFolderList
    counter = 0;
    emit Update(0,"Clean compare..",newI.Folder.size());
    foreach (QString s, newI.Folder) {
        counter++;
        cleanNewFolder << s.replace(rStr2,"");
        emit Update(counter,"...",-1);
    }


    //Compare Folder
    counter =0;
    emit Update(0,"Compare the folders",cleanOldFolder.size());

    for (int var = 0; var < cleanOldFolder.size(); ++var) {
        counter++;
        if (!cleanNewFolder.contains(cleanOldFolder[var])) {
            tempAnalyse.MissingFolderNew << (rStr + cleanOldFolder[var]);
            emit Update(counter,"Missing folder found",-1);
        }
        emit Update(counter,"...",-1);
    }

//    foreach (QString f, cleanOldFolder) {
//        if (!cleanNewFolder.contains(f)) {
//            tempAnalyse.MissingFolderNew << f;
//        }
//    }


    //Clean Files
    counter = 0;
    emit Update(0,"cleaning files",allFilesOld.size() + allFilesNew.size());
    foreach (QString s, allFilesOld) {
        counter++;
        cleanOldFiles << s.replace(rStr,"");
        emit Update(counter,"...",-1);
    }

    foreach (QString s, allFilesNew) {
        counter++;
        cleanNewFiles << s.replace(rStr2,"");
        emit Update(counter,"...",-1);
    }

    //Compare Files

    counter = 0;
    emit Update(0,"Compare the files",cleanOldFiles.size());
    for (int var = 0; var < cleanOldFiles.size(); ++var) {
        counter++;
        if (!cleanNewFiles.contains(cleanOldFiles[var])) {
            tempAnalyse.MissingFilesNew << (rStr + cleanOldFiles[var]);
            emit Update(counter,"Missing File found",-1);
        }
        emit Update(counter,"...",-1);
    }

//    foreach (QString s, allFilesOld) {
//        if (!allFilesNew.contains(s.replace(rStr,""))) {
//            tempAnalyse.MissingFilesNew << s;
//        }
//    }

    return tempAnalyse;

}
