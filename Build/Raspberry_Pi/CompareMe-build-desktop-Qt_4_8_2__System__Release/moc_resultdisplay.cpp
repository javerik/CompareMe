/****************************************************************************
** Meta object code from reading C++ file 'resultdisplay.h'
**
** Created: Sat Aug 2 23:09:18 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CompareMe/resultdisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resultdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ResultDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   46,   46,   46, 0x08,
      47,   74,   46,   46, 0x08,
      77,   46,   46,   46, 0x08,
      92,   46,   46,   46, 0x08,
     122,   46,   46,   46, 0x08,
     151,   46,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ResultDisplay[] = {
    "ResultDisplay\0on_btn_copyFolder_all_clicked()\0"
    "\0UpdateMSG(int,QString,int)\0,,\0"
    "TaskFinished()\0on_btn_copyAllFiles_clicked()\0"
    "GetProperties(propertyClass)\0"
    "on_btn_properties_clicked()\0"
};

void ResultDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
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

const QMetaObjectExtraData ResultDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ResultDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ResultDisplay,
      qt_meta_data_ResultDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ResultDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ResultDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ResultDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResultDisplay))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
