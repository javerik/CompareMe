#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <QWidget>
#include <propertyclass.h>
namespace Ui {
class properties;
}

class properties : public QWidget
{
    Q_OBJECT

public:
    explicit properties(QWidget *parent = 0);
    ~properties();

private:
    Ui::properties *ui;
    propertyClass *_pClass;

signals:
    void returnProperties(propertyClass pC);
private slots:
    void on_btn_ok_clicked();
};

#endif // PROPERTIES_H
