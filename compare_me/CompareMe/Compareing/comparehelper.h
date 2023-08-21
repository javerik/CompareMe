#ifndef COMPAREHELPER_H
#define COMPAREHELPER_H

#include <QThread>

#include <QDir>
#include <QString>
#include <Helper/directoriehelper.h>
#include <Compareing/comparefilter.h>
#include <Compareing/compareresult.h>
#include <Compareing/compareanalyse.h>
#include <Compareing/compareitem.h>
class CompareHelper : public QThread
{
    Q_OBJECT
public:
    explicit CompareHelper(QObject *parent = 0);

    void SetData(QString oldDir,QString newDir);

    void run();

    CompareResult* GetData();

signals:
    void Update(int,QString,int);

    void AFinish();

public slots:

private:
    DirectoryHelper *_dirHelper;

    CompareAnalyse DoAnalyse(CompareItem oldI,CompareItem newI);

    CompareResult *_result;

    QString _oldDir;
    QString _newDir;

};

#endif // COMPAREHELPER_H
