/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Aug 2 23:06:53 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_sourceFolder;
    QLineEdit *inp_selectedFilePath;
    QPushButton *btn_browseFile;
    QLabel *label_2;
    QLineEdit *inp_selectedFilePath_second;
    QPushButton *btn_browsFile_second;
    QLabel *label_3;
    QPushButton *btn_selectFile;
    QLabel *label_status;
    QProgressBar *progressBar_status;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(435, 360);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_sourceFolder = new QLabel(centralWidget);
        label_sourceFolder->setObjectName(QString::fromUtf8("label_sourceFolder"));

        verticalLayout->addWidget(label_sourceFolder);

        inp_selectedFilePath = new QLineEdit(centralWidget);
        inp_selectedFilePath->setObjectName(QString::fromUtf8("inp_selectedFilePath"));

        verticalLayout->addWidget(inp_selectedFilePath);

        btn_browseFile = new QPushButton(centralWidget);
        btn_browseFile->setObjectName(QString::fromUtf8("btn_browseFile"));

        verticalLayout->addWidget(btn_browseFile);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        inp_selectedFilePath_second = new QLineEdit(centralWidget);
        inp_selectedFilePath_second->setObjectName(QString::fromUtf8("inp_selectedFilePath_second"));

        verticalLayout->addWidget(inp_selectedFilePath_second);

        btn_browsFile_second = new QPushButton(centralWidget);
        btn_browsFile_second->setObjectName(QString::fromUtf8("btn_browsFile_second"));

        verticalLayout->addWidget(btn_browsFile_second);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        btn_selectFile = new QPushButton(centralWidget);
        btn_selectFile->setObjectName(QString::fromUtf8("btn_selectFile"));

        verticalLayout->addWidget(btn_selectFile);

        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_status->sizePolicy().hasHeightForWidth());
        label_status->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_status);

        progressBar_status = new QProgressBar(centralWidget);
        progressBar_status->setObjectName(QString::fromUtf8("progressBar_status"));
        progressBar_status->setValue(24);

        verticalLayout->addWidget(progressBar_status);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 435, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CompareMe by Javerik", 0, QApplication::UnicodeUTF8));
        label_sourceFolder->setText(QApplication::translate("MainWindow", "Source folder", 0, QApplication::UnicodeUTF8));
        btn_browseFile->setText(QApplication::translate("MainWindow", "Browse", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Compare folder", 0, QApplication::UnicodeUTF8));
        btn_browsFile_second->setText(QApplication::translate("MainWindow", "Browse", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Click GO when finish", 0, QApplication::UnicodeUTF8));
        btn_selectFile->setText(QApplication::translate("MainWindow", "GO", 0, QApplication::UnicodeUTF8));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
