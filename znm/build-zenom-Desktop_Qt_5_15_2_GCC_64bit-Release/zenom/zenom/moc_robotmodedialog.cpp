/****************************************************************************
** Meta object code from reading C++ file 'robotmodedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../zenom/zenom/zenom/robotmodedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robotmodedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobotModeDialog_t {
    QByteArrayData data[13];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobotModeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobotModeDialog_t qt_meta_stringdata_RobotModeDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RobotModeDialog"
QT_MOC_LITERAL(1, 16, 21), // "on_headButton_pressed"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "on_rArmButton_pressed"
QT_MOC_LITERAL(4, 61, 21), // "on_lArmButton_pressed"
QT_MOC_LITERAL(5, 83, 25), // "on_bothArmsButton_pressed"
QT_MOC_LITERAL(6, 109, 27), // "on_walkTowardButton_pressed"
QT_MOC_LITERAL(7, 137, 21), // "on_stopButton_pressed"
QT_MOC_LITERAL(8, 159, 33), // "on_rightHandCheckbox_stateCha..."
QT_MOC_LITERAL(9, 193, 4), // "arg1"
QT_MOC_LITERAL(10, 198, 32), // "on_leftHandCheckbox_stateChanged"
QT_MOC_LITERAL(11, 231, 33), // "on_wholeBodyCheckbox_stateCha..."
QT_MOC_LITERAL(12, 265, 35) // "on_distBetwArmsSpinbox_valueC..."

    },
    "RobotModeDialog\0on_headButton_pressed\0"
    "\0on_rArmButton_pressed\0on_lArmButton_pressed\0"
    "on_bothArmsButton_pressed\0"
    "on_walkTowardButton_pressed\0"
    "on_stopButton_pressed\0"
    "on_rightHandCheckbox_stateChanged\0"
    "arg1\0on_leftHandCheckbox_stateChanged\0"
    "on_wholeBodyCheckbox_stateChanged\0"
    "on_distBetwArmsSpinbox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobotModeDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      11,    1,   76,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void RobotModeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobotModeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_headButton_pressed(); break;
        case 1: _t->on_rArmButton_pressed(); break;
        case 2: _t->on_lArmButton_pressed(); break;
        case 3: _t->on_bothArmsButton_pressed(); break;
        case 4: _t->on_walkTowardButton_pressed(); break;
        case 5: _t->on_stopButton_pressed(); break;
        case 6: _t->on_rightHandCheckbox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_leftHandCheckbox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_wholeBodyCheckbox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_distBetwArmsSpinbox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobotModeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_RobotModeDialog.data,
    qt_meta_data_RobotModeDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobotModeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotModeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobotModeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RobotModeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
