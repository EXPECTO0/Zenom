/****************************************************************************
** Meta object code from reading C++ file 'setargumentdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../zenom/zenom/zenom/scene/setargumentdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setargumentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SetArgumentDialog_t {
    QByteArrayData data[10];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetArgumentDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetArgumentDialog_t qt_meta_stringdata_SetArgumentDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SetArgumentDialog"
QT_MOC_LITERAL(1, 18, 6), // "binded"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "NodeData*"
QT_MOC_LITERAL(4, 36, 21), // "QVector<LogVariable*>"
QT_MOC_LITERAL(5, 58, 10), // "pArguments"
QT_MOC_LITERAL(6, 69, 8), // "unbinded"
QT_MOC_LITERAL(7, 78, 21), // "on_bindButton_clicked"
QT_MOC_LITERAL(8, 100, 23), // "on_unbindButton_clicked"
QT_MOC_LITERAL(9, 124, 37) // "on_argumentTable_itemSelectio..."

    },
    "SetArgumentDialog\0binded\0\0NodeData*\0"
    "QVector<LogVariable*>\0pArguments\0"
    "unbinded\0on_bindButton_clicked\0"
    "on_unbindButton_clicked\0"
    "on_argumentTable_itemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetArgumentDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   47,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    5,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SetArgumentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetArgumentDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->binded((*reinterpret_cast< NodeData*(*)>(_a[1])),(*reinterpret_cast< const QVector<LogVariable*>(*)>(_a[2]))); break;
        case 1: _t->unbinded((*reinterpret_cast< NodeData*(*)>(_a[1]))); break;
        case 2: _t->on_bindButton_clicked(); break;
        case 3: _t->on_unbindButton_clicked(); break;
        case 4: _t->on_argumentTable_itemSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SetArgumentDialog::*)(NodeData * , const QVector<LogVariable*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetArgumentDialog::binded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SetArgumentDialog::*)(NodeData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetArgumentDialog::unbinded)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SetArgumentDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SetArgumentDialog.data,
    qt_meta_data_SetArgumentDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SetArgumentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetArgumentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetArgumentDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SetArgumentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SetArgumentDialog::binded(NodeData * _t1, const QVector<LogVariable*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SetArgumentDialog::unbinded(NodeData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
