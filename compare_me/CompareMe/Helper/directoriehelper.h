#ifndef DIRECTORIEHELPER_H
#define DIRECTORIEHELPER_H

#include <QString>
#include <QDir>
class DirectorieHelper
{
public:
    DirectorieHelper();

    QStringList GetAllDirs(QString baseDir);

    QStringList GetAllFiles(QString baseDir);

    QStringList GetAllDirsWithSub(QString baseDir);
};

#endif // DIRECTORIEHELPER_H
