#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <Helper/directoriehelper.h>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->_compareHelper = new CompareHelper;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_browseFile_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    this->ui->inp_selectedFilePath->setText(dir);
//    DirectorieHelper dirHelper;

//    QStringList list = dirHelper.GetAllFiles(dir);

//    foreach (QString s, list) {
//        qDebug() << "DIR:" <<s;
//    }




}

void MainWindow::on_btn_browsFile_second_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    this->ui->inp_selectedFilePath_second->setText(dir);

}

void MainWindow::on_btn_selectFile_clicked()
{
    this->_compareHelper->SetData(this->ui->inp_selectedFilePath->text(),
                                  this->ui->inp_selectedFilePath_second->text());

    connect(this->_compareHelper,SIGNAL(Update(int,QString,int)),this,SLOT(UpdateMsg(int,QString,int)));
    connect(this->_compareHelper,SIGNAL(AFinish()),this,SLOT(AFinish()));

    this->_compareHelper->start();
}

void MainWindow::UpdateMsg(int c, QString m, int mx)
{
    if (mx > 0) {
        this->ui->progressBar_status->setMaximum(mx);
    }

    this->ui->progressBar_status->setValue(c);

    this->ui->label_status->setText(m);

}

void MainWindow::AFinish()
{
    this->ui->label_status->setText("Analyse complete!");
    this->_resultDisplay = new ResultDisplay(0,this->_compareHelper->GetData());
    this->_resultDisplay->show();
}
