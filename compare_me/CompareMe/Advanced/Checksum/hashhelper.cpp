#include "hashhelper.h"

hashHelper::hashHelper()
{
    this->_sumHelper = new QCryptographicHash(QCryptographicHash::Sha1);
}

QString hashHelper::GenerateHash(QString file)
{
    QFile f(file);

    if (!f.open(QIODevice::ReadOnly)) {
        return "ERROR";
    }

    this->_sumHelper->reset();
    this->_sumHelper->addData(f.readAll());

    QByteArray result = this->_sumHelper->result().toHex();

    return QString(result.toHex());

}
