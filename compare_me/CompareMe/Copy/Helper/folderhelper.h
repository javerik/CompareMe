#ifndef FOLDERHELPER_H
#define FOLDERHELPER_H

#include <QThread>
#include <QDir>

#include "Messages/updatemessage.h"
#include "Compareing/compareitem.h"
#include "Compareing/compareresult.h"

class FolderHelper : public QThread
{
    Q_OBJECT
public:
    explicit FolderHelper(QObject *parent = 0);

    void run();

    CompareResult *_result;


signals:
    void Update(int,QString,int);
    void Finish();

public slots:

};

#endif // FOLDERHELPER_H
