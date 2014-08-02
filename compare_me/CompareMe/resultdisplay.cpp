#include "resultdisplay.h"
#include "ui_resultdisplay.h"

#include <QListWidget>
#include <QListWidgetItem>
#include <QDebug>
ResultDisplay::ResultDisplay(QWidget *parent, CompareResult *result) :
    QWidget(parent),
    ui(new Ui::ResultDisplay)
{
    ui->setupUi(this);

    this->_pClass._hashSafety = false;

    //this->_result = result;

    this->_result = new CompareResult(result->isError(),result->GetAnalyse());

    QString strMissingFiles = "Missing Files:" ;

    int missingFilesCount = this->_result->GetAnalyse().MissingFilesNew.size();

    strMissingFiles += QString::number(missingFilesCount);

    QString strMissingFolder = "Missing Folder:";

    strMissingFolder += QString::number(this->_result->GetAnalyse().MissingFolderNew.size());


    this->ui->label_missingFilesNew->setText(strMissingFiles);
    this->ui->label_missingFolderNew->setText( strMissingFolder);

    foreach (QString s, this->_result->GetAnalyse().MissingFolderNew) {
        //this->ui->inp_missingFolder->append(s + "\n");
        this->ui->list_missingFolder->addItem(new QListWidgetItem(s + "\n"));
    }

    foreach (QString s, this->_result->GetAnalyse().MissingFilesNew) {
        //this->ui->inp_missingFiles->append(s + "\n");
        this->ui->list_missingFiles->addItem(new QListWidgetItem(s + "\n"));
    }


}

ResultDisplay::~ResultDisplay()
{
    delete ui;
}

//Starts creating the missing Folders
void ResultDisplay::on_btn_copyFolder_all_clicked()
{
    this->_helper = new FolderHelper;

     qDebug() << this->_result->GetAnalyse().MissingFilesNew.size();
     this->_helper->_result = this->_result;

    connect(this->_helper,SIGNAL(Update(int,QString,int)),this,SLOT(UpdateMSG(int,QString,int)));
    connect(this->_helper,SIGNAL(finished()),this,SLOT(TaskFinished()));
    this->_helper->start();



}

void ResultDisplay::on_btn_copyAllFiles_clicked()
{

    this->_fileHelper = new fileHelper(0,&this->_pClass);

    this->_fileHelper->_result = this->_result;

    connect(this->_fileHelper,SIGNAL(Update(int,QString,int)),this,SLOT(UpdateMSG(int,QString,int)));
    connect(this->_fileHelper,SIGNAL(FinishTask()),SLOT(TaskFinished()));

    this->_fileHelper->start();

}




void ResultDisplay::UpdateMSG(int c, QString m, int mx)
{
    this->ui->label_status->setText(m);

    if (mx!= -1) {
        this->ui->progressBar_status->setMaximum(mx);
    }

    this->ui->progressBar_status->setValue(c);

    this->_log.WriteLog(m);
}

void ResultDisplay::TaskFinished()
{
    this->ui->label_status->setText("Task Finished!");
    this->ui->progressBar_status->setValue(0);
    this->_log.WriteLog("FinishTask");
}

void ResultDisplay::on_btn_properties_clicked()
{
    properties *p = new properties;

    connect(p,SIGNAL(returnProperties(propertyClass)),this,SLOT(GetProperties(propertyClass)));

    p->show();

}

void ResultDisplay::GetProperties(propertyClass c)
{
    this->_pClass = c;
}
