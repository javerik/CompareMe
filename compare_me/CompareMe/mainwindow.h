#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Compareing/comparehelper.h>
#include <Compareing/compareanalyse.h>
#include <Compareing/comparefilter.h>
#include <Compareing/compareresult.h>
#include <resultdisplay.h>
#include <Helper/directoriehelper.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_browseFile_clicked();

    void on_btn_browsFile_second_clicked();

    void on_btn_start_compare_clicked();

    void UpdateMsg(int,QString,int);

    void AFinish();

    void on_inp_selectedFilePath_textChanged(const QString &arg1);

    void on_inp_selectedFilePath_second_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;


    CompareHelper *_compareHelper;

    ResultDisplay *_resultDisplay;
    DirectoryHelper _directoryHelper;
    bool dirs_valid();

    void set_enable();
};

#endif // MAINWINDOW_H
