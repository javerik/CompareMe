#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Compareing/comparehelper.h>
#include <Compareing/compareanalyse.h>
#include <Compareing/comparefilter.h>
#include <Compareing/compareresult.h>
#include <resultdisplay.h>
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

    void on_btn_selectFile_clicked();

    void UpdateMsg(int,QString,int);

    void AFinish();

private:
    Ui::MainWindow *ui;


    CompareHelper *_compareHelper;

    ResultDisplay *_resultDisplay;

};

#endif // MAINWINDOW_H
