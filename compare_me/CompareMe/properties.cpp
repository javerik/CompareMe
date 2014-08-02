#include "properties.h"
#include "ui_properties.h"

properties::properties(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::properties)
{
    ui->setupUi(this);
}

properties::~properties()
{
    delete ui;
}

void properties::on_btn_ok_clicked()
{
    propertyClass tempClass;
    tempClass._hashSafety = this->ui->cb_hashSafety->isChecked();

    emit returnProperties(tempClass);


}
