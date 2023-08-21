#ifndef COMMON_H
#define COMMON_H

#include <QString>

namespace Ui {
static const QString COLOR_RED = QString("#EF5350");
static const QString COLOR_GREEN = QString("#66BB6A");

enum Component {
    LineEdit
};

class UiCommon {
public:
    static QString Background(Component cmp, QString color) {
        //"QLineEdit { background-color: red; }"
        QString cmpStr;
        switch (cmp) {
        case LineEdit:
            cmpStr = QString("QLineEdit");
            break;
        default:
            throw new std::exception();
            break;
        }
        return QString("%1 { background-color: %2; }").arg(cmpStr, color);
    }
};

}


#endif // COMMON_H
