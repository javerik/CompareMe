#ifndef COMPAREITEM_H
#define COMPAREITEM_H

#include <QString>
#include <QStringList>
class CompareItem
{
public:
    CompareItem();

    QString BasePath;
    QStringList Folder;

    QStringList Files;


};

#endif // COMPAREITEM_H
