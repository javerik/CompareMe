#ifndef DIRECTORIEHELPER_H
#define DIRECTORIEHELPER_H

#include <QString>
#include <QDir>


class DirectoryHelper
{
public:
    DirectoryHelper();

    QStringList GetAllDirs(QString baseDir);

    QStringList GetAllFiles(QString baseDir);

    QStringList GetAllDirsWithSub(QString baseDir);

    bool IsEmptyOrMissing(const QString &dir);
};

#endif // DIRECTORIEHELPER_H
