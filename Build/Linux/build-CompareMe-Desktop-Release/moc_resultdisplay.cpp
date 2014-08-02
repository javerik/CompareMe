/****************************************************************************
** Meta object code from reading C++ file 'resultdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Releases/CompareMe/compare_me/CompareMe/resultdisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resultdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResultDisplay_t {
    QByteArrayData data[9];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ResultDisplay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ResultDisplay_t qt_meta_stringdata_ResultDisplay = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 29),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 9),
QT_MOC_LITERAL(4, 55, 12),
QT_MOC_LITERAL(5, 68, 27),
QT_MOC_LITERAL(6, 96, 13),
QT_MOC_LITERAL(7, 110, 13),
QT_MOC_LITERAL(8, 124, 25)
    },
    "ResultDisplay\0on_btn_copyFolder_all_clicked\0"
    "\0UpdateMSG\0TaskFinished\0"
    "on_btn_copyAllFiles_clicked\0GetProperties\0"
    "propertyClass\0on_btn_properties_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResultDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08,
       3,    3,   45,    2, 0x08,
       4,    0,   52,    2, 0x08,
       5,    0,   53,    2, 0x08,
       6,    1,   54,    2, 0x08,
       8,    0,   57,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

       0        // eod
};

void ResultDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResultDisplay *_t = static_cast<ResultDisplay *>(_o);
        switch (_id) {
        case 0: _t->on_btn_copyFolder_all_clicked(); break;
        case 1: _t->UpdateMSG((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->TaskFinished(); break;
        case 3: _t->on_btn_copyAllFiles_clicked(); break;
        case 4: _t->GetProperties((*reinterpret_cast< propertyClass(*)>(_a[1]))); break;
        case 5: _t->on_btn_properties_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ResultDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ResultDisplay.data,
      qt_meta_data_ResultDisplay,  qt_static_metacall, 0, 0}
};


const QMetaObject *ResultDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResultDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResultDisplay.stringdata))
        return static_cast<void*>(const_cast< ResultDisplay*>(this));
    return QWidget::qt_metacast(_clname);
}

int ResultDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
