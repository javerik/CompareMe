/********************************************************************************
** Form generated from reading UI file 'resultdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTDISPLAY_H
#define UI_RESULTDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultDisplay
{
public:
    QLabel *label_missingFolderNew;
    QLabel *label_missingFilesNew;
    QLabel *label_missingFolder;
    QLabel *label_missingFiles;
    QListWidget *list_missingFolder;
    QListWidget *list_missingFiles;
    QPushButton *btn_copyFolder_all;
    QProgressBar *progressBar_status;
    QLabel *label_status;
    QPushButton *btn_copyAllFiles;
    QPushButton *btn_properties;

    void setupUi(QWidget *ResultDisplay)
    {
        if (ResultDisplay->objectName().isEmpty())
            ResultDisplay->setObjectName(QStringLiteral("ResultDisplay"));
        ResultDisplay->resize(768, 402);
        label_missingFolderNew = new QLabel(ResultDisplay);
        label_missingFolderNew->setObjectName(QStringLiteral("label_missingFolderNew"));
        label_missingFolderNew->setGeometry(QRect(10, 10, 441, 17));
        label_missingFilesNew = new QLabel(ResultDisplay);
        label_missingFilesNew->setObjectName(QStringLiteral("label_missingFilesNew"));
        label_missingFilesNew->setGeometry(QRect(10, 40, 431, 17));
        label_missingFolder = new QLabel(ResultDisplay);
        label_missingFolder->setObjectName(QStringLiteral("label_missingFolder"));
        label_missingFolder->setGeometry(QRect(10, 70, 111, 17));
        label_missingFiles = new QLabel(ResultDisplay);
        label_missingFiles->setObjectName(QStringLiteral("label_missingFiles"));
        label_missingFiles->setGeometry(QRect(430, 70, 101, 17));
        list_missingFolder = new QListWidget(ResultDisplay);
        list_missingFolder->setObjectName(QStringLiteral("list_missingFolder"));
        list_missingFolder->setGeometry(QRect(10, 100, 341, 211));
        list_missingFiles = new QListWidget(ResultDisplay);
        list_missingFiles->setObjectName(QStringLiteral("list_missingFiles"));
        list_missingFiles->setGeometry(QRect(410, 100, 341, 211));
        btn_copyFolder_all = new QPushButton(ResultDisplay);
        btn_copyFolder_all->setObjectName(QStringLiteral("btn_copyFolder_all"));
        btn_copyFolder_all->setGeometry(QRect(10, 320, 121, 27));
        progressBar_status = new QProgressBar(ResultDisplay);
        progressBar_status->setObjectName(QStringLiteral("progressBar_status"));
        progressBar_status->setGeometry(QRect(10, 370, 341, 23));
        progressBar_status->setValue(24);
        label_status = new QLabel(ResultDisplay);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(360, 370, 391, 17));
        btn_copyAllFiles = new QPushButton(ResultDisplay);
        btn_copyAllFiles->setObjectName(QStringLiteral("btn_copyAllFiles"));
        btn_copyAllFiles->setGeometry(QRect(410, 320, 99, 27));
        btn_properties = new QPushButton(ResultDisplay);
        btn_properties->setObjectName(QStringLiteral("btn_properties"));
        btn_properties->setGeometry(QRect(650, 10, 99, 27));

        retranslateUi(ResultDisplay);

        QMetaObject::connectSlotsByName(ResultDisplay);
    } // setupUi

    void retranslateUi(QWidget *ResultDisplay)
    {
        ResultDisplay->setWindowTitle(QApplication::translate("ResultDisplay", "Compare Screen", 0));
        label_missingFolderNew->setText(QApplication::translate("ResultDisplay", "TextLabel", 0));
        label_missingFilesNew->setText(QApplication::translate("ResultDisplay", "TextLabel", 0));
        label_missingFolder->setText(QApplication::translate("ResultDisplay", "Missing Folder:", 0));
        label_missingFiles->setText(QApplication::translate("ResultDisplay", "Missing Files:", 0));
#ifndef QT_NO_TOOLTIP
        btn_copyFolder_all->setToolTip(QApplication::translate("ResultDisplay", "<html><head/><body><p>Will create all missing Folders(without the files) in the new directory.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btn_copyFolder_all->setText(QApplication::translate("ResultDisplay", "Copy all Folder", 0));
        label_status->setText(QApplication::translate("ResultDisplay", "TextLabel", 0));
        btn_copyAllFiles->setText(QApplication::translate("ResultDisplay", "Copy all Files", 0));
        btn_properties->setText(QApplication::translate("ResultDisplay", "Properties", 0));
    } // retranslateUi

};

namespace Ui {
    class ResultDisplay: public Ui_ResultDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTDISPLAY_H
