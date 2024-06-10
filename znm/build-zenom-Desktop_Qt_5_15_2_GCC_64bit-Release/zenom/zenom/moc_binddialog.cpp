/****************************************************************************
** Meta object code from reading C++ file 'binddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../zenom/zenom/zenom/scene/binddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'binddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BindDialog_t {
    QByteArrayData data[12];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BindDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BindDialog_t qt_meta_stringdata_BindDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BindDialog"
QT_MOC_LITERAL(1, 11, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 29), // "on_nodeTree_itemDoubleClicked"
QT_MOC_LITERAL(4, 65, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 82, 9), // "pNodeItem"
QT_MOC_LITERAL(6, 92, 10), // "bindedSlot"
QT_MOC_LITERAL(7, 103, 9), // "NodeData*"
QT_MOC_LITERAL(8, 113, 9), // "pNodeData"
QT_MOC_LITERAL(9, 123, 21), // "QVector<LogVariable*>"
QT_MOC_LITERAL(10, 145, 10), // "pArguments"
QT_MOC_LITERAL(11, 156, 12) // "unbindedSlot"

    },
    "BindDialog\0on_closeButton_clicked\0\0"
    "on_nodeTree_itemDoubleClicked\0"
    "QTreeWidgetItem*\0pNodeItem\0bindedSlot\0"
    "NodeData*\0pNodeData\0QVector<LogVariable*>\0"
    "pArguments\0unbindedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BindDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    2,   35,    2, 0x08 /* Private */,
       6,    2,   40,    2, 0x08 /* Private */,
      11,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void BindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BindDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_closeButton_clicked(); break;
        case 1: _t->on_nodeTree_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->bindedSlot((*reinterpret_cast< NodeData*(*)>(_a[1])),(*reinterpret_cast< const QVector<LogVariable*>(*)>(_a[2]))); break;
        case 3: _t->unbindedSlot((*reinterpret_cast< NodeData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BindDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BindDialog.data,
    qt_meta_data_BindDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BindDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
