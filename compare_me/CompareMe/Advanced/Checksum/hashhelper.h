#ifndef HASHHELPER_H
#define HASHHELPER_H

#include <QCryptographicHash>
#include <QFile>
class hashHelper
{
public:
    hashHelper();

    QString GenerateHash(QString file);

private:
    QCryptographicHash *_sumHelper;

};

#endif // HASHHELPER_H
