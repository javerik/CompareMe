#ifndef FILEHELPER_H
#define FILEHELPER_H

#include <QThread>
#include <QFileInfo>
#include <QFile>

#include "Messages/updatemessage.h"
#include "Compareing/compareresult.h"
#include "Advanced/Checksum/hashhelper.h"
#include "propertyclass.h"
class fileHelper : public QThread
{
    Q_OBJECT
public:
    explicit fileHelper(QObject *parent = 0,propertyClass *p=NULL);

    void run();

    CompareResult *_result;



private:
    bool CopyFile(const QString& sourceFile, const QString& destinationDir);

    void defaultCopy();

    void hashSafeCopy();

    hashHelper _hashHelper;

    propertyClass *_pClass;

signals:
    void Update(int,QString,int);
    void FinishTask();

public slots:

};

#endif // FILEHELPER_H
