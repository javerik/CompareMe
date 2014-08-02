#ifndef RESULTDISPLAY_H
#define RESULTDISPLAY_H

#include <QWidget>
#include <Compareing/compareresult.h>
#include "Copy/copymain.h"
#include "Copy/Helper/folderhelper.h"
#include "Copy/Helper/filehelper.h"

#include "Advanced/Checksum/hashhelper.h"
#include "Messages/updatemessage.h"
#include "propertyclass.h"
#include "properties.h"
#include "Log/log.h"
namespace Ui {
class ResultDisplay;
}

class ResultDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit ResultDisplay(QWidget *parent = 0,CompareResult *result= NULL);
    ~ResultDisplay();

private slots:
    void on_btn_copyFolder_all_clicked();


    void UpdateMSG(int,QString,int);

    void TaskFinished();

    void on_btn_copyAllFiles_clicked();

    void GetProperties(propertyClass);

    void on_btn_properties_clicked();

private:
    Ui::ResultDisplay *ui;

    CompareResult *_result;
    FolderHelper *_helper;
    fileHelper *_fileHelper;
    LOG _log;

    propertyClass _pClass;

};

#endif // RESULTDISPLAY_H
