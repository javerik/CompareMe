/********************************************************************************
** Form generated from reading UI file 'properties.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIES_H
#define UI_PROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_properties
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *cb_hashSafety;
    QPushButton *btn_ok;

    void setupUi(QWidget *properties)
    {
        if (properties->objectName().isEmpty())
            properties->setObjectName(QStringLiteral("properties"));
        properties->resize(400, 166);
        verticalLayout_2 = new QVBoxLayout(properties);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cb_hashSafety = new QCheckBox(properties);
        cb_hashSafety->setObjectName(QStringLiteral("cb_hashSafety"));

        verticalLayout->addWidget(cb_hashSafety);

        btn_ok = new QPushButton(properties);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        verticalLayout->addWidget(btn_ok);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(properties);

        QMetaObject::connectSlotsByName(properties);
    } // setupUi

    void retranslateUi(QWidget *properties)
    {
        properties->setWindowTitle(QApplication::translate("properties", "Properties", 0));
#ifndef QT_NO_TOOLTIP
        cb_hashSafety->setToolTip(QApplication::translate("properties", "<html><head/><body><p>Creates, befor copy, for each missing file a hash-checksum from the originnal and checks if they are equal.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        cb_hashSafety->setText(QApplication::translate("properties", "Hash safety copy", 0));
        btn_ok->setText(QApplication::translate("properties", "OK and Save", 0));
    } // retranslateUi

};

namespace Ui {
    class properties: public Ui_properties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIES_H
