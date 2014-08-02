/****************************************************************************
** Meta object code from reading C++ file 'folderhelper.h'
**
** Created: Sat Aug 2 23:09:34 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CompareMe/Copy/Helper/folderhelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderhelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FolderHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   37,   40,   40, 0x05,
      41,   40,   40,   40, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_FolderHelper[] = {
    "FolderHelper\0Update(int,QString,int)\0"
    ",,\0\0Finish()\0"
};

void FolderHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FolderHelper *_t = static_cast<FolderHelper *>(_o);
        switch (_id) {
        case 0: _t->Update((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->Finish(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FolderHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FolderHelper::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_FolderHelper,
      qt_meta_data_FolderHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FolderHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FolderHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FolderHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FolderHelper))
        return static_cast<void*>(const_cast< FolderHelper*>(this));
    return QThread::qt_metacast(_clname);
}

int FolderHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FolderHelper::Update(int _t1, QString _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FolderHelper::Finish()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
