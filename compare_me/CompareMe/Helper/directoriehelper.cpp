#include "directoriehelper.h"
#include <QDebug>

#include <QFileInfo>
DirectorieHelper::DirectorieHelper()
{
}

QStringList DirectorieHelper::GetAllDirs(QString baseDir)
{
    QDir tempbase(baseDir);
    return tempbase.entryList(QDir::AllDirs);
}

QStringList DirectorieHelper::GetAllFiles(QString baseDir)
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

QStringList DirectorieHelper::GetAllDirsWithSub(QString baseDir)
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
