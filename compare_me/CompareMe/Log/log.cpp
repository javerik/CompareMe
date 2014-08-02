#include "log.h"
#include <QDateTime>
LOG::LOG()
{

    QDir d("log");

    if (!d.exists()) {
        d.mkpath("log");
    }

    QDateTime dt = QDateTime::currentDateTime();

    WriteLog("################New Log :" + dt.toString() + "#############");



}


void LOG::WriteLog(QString lMsg)
{

    QString oldData;
    oldData = "";
    QFile f("log/log.txt");

    if (f.exists()) {
        f.open(QIODevice::ReadOnly);
        QTextStream in(&f);

        oldData = in.readAll();
        f.close();
    }




    f.open(QIODevice::WriteOnly |QIODevice::Text);

    QTextStream out(&f);

    out << oldData << "\n" << lMsg;

    f.close();
}
