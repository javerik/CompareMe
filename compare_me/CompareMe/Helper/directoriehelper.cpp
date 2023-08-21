#include "directoriehelper.h"
#include <QDebug>

#include <QFileInfo>
DirectoryHelper::DirectoryHelper()
{
}

QStringList DirectoryHelper::GetAllDirs(QString baseDir)
{
    QDir tempbase(baseDir);
    return tempbase.entryList(QDir::AllDirs);
}

QStringList DirectoryHelper::GetAllFiles(QString baseDir)
{
    QDir d(baseDir);



    d.setFilter(QDir::Files);
    QStringList cleaned;

    foreach (QString f, d.entryList(QDir::AllEntries)) {
        if (QFileInfo(baseDir + "/" + f).isFile()) {
            cleaned << baseDir + "/" + f;
        }
    }


    return cleaned;
}

QStringList DirectoryHelper::GetAllDirsWithSub(QString baseDir)
{


    QStringList returnList;

    QString currentDir = baseDir;

        QStringList tempDirs = GetAllDirs(currentDir);


        if (tempDirs.size() < 3) {
            return returnList;
        }


        foreach (QString s, tempDirs) {



            if (s == ".") {
                continue;
            }else if(s == "..")
            {
                continue;
            }

            if (s != "." || s != "..") {
                QStringList tempDirs2 = GetAllDirsWithSub(currentDir + "/" + s);

                //qDebug() << "TempOne" << currentDir + "/" + s;
                returnList << (currentDir + "/" + s);
                foreach (QString s2, tempDirs2) {
                    //qDebug() << s2;
                    returnList << (s2);
                }
            }


        }


     return returnList;





}

bool DirectoryHelper::IsEmptyOrMissing(const QString &dir)
{
     QDir d(dir);
     if (!d.exists()) return true;
     if (d.entryList().isEmpty()) return true;
     return false;
}
