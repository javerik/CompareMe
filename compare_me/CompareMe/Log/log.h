#ifndef LOG_H
#define LOG_H
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QString>
class LOG
{
public:
    LOG();


    void WriteLog(QString lMsg);

};

#endif // LOG_H
