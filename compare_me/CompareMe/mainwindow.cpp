#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QDebug>
#include <Helper/directoriehelper.h>
#include <common.h>

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

void MainWindow::on_btn_start_compare_clicked()
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

void MainWindow::on_inp_selectedFilePath_textChanged(const QString &arg1)
{
    if (arg1.isEmpty()) {
        this->ui->inp_selectedFilePath->setStyleSheet("");
        return;
    }
    if (_directoryHelper.IsEmptyOrMissing(arg1)) {
        this->ui->inp_selectedFilePath->setStyleSheet(Ui::UiCommon::Background(Ui::LineEdit, Ui::COLOR_RED));
    } else {
        this->ui->inp_selectedFilePath->setStyleSheet(Ui::UiCommon::Background(Ui::LineEdit, Ui::COLOR_GREEN));
    }

    set_enable();
}

bool MainWindow::dirs_valid()
{
    QString dir1 = this->ui->inp_selectedFilePath->text();
    QString dir2 = this->ui->inp_selectedFilePath_second->text();
    return !(_directoryHelper.IsEmptyOrMissing(dir1) || _directoryHelper.IsEmptyOrMissing(dir2));
}

void MainWindow::set_enable()
{
    this->ui->btn_start_compare->setEnabled(dirs_valid());
}


void MainWindow::on_inp_selectedFilePath_second_textChanged(const QString &arg1)
{
    if (arg1.isEmpty()) {
        this->ui->inp_selectedFilePath_second->setStyleSheet("");
        return;
    }
    if (_directoryHelper.IsEmptyOrMissing(arg1)) {
        this->ui->inp_selectedFilePath_second->setStyleSheet(Ui::UiCommon::Background(Ui::LineEdit, Ui::COLOR_RED));
    } else {
        this->ui->inp_selectedFilePath_second->setStyleSheet(Ui::UiCommon::Background(Ui::LineEdit, Ui::COLOR_GREEN));
    }
    set_enable();
}

