#ifndef COMPAREANALYSE_H
#define COMPAREANALYSE_H

#include <QString>
#include <QStringList>
class CompareAnalyse
{
public:
    CompareAnalyse();

    int FileCountOld;

    int FileCountNew;

    QString OldBasePath;
    QString NewBasePath;

    QStringList MissingFilesOld;
    QStringList MissingFilesNew;

    int FolderCountOld;

    int FolderCountNew;


    QStringList MissingFolderOld;
    QStringList MissingFolderNew;

};

#endif // COMPAREANALYSE_H
