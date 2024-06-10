/****************************************************************************
** Meta object code from reading C++ file 'plotwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "plot/plotwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlotWindow_t {
    QByteArrayData data[13];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotWindow_t qt_meta_stringdata_PlotWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PlotWindow"
QT_MOC_LITERAL(1, 11, 6), // "closed"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "PlotWindow*"
QT_MOC_LITERAL(4, 31, 24), // "on_action_Open_triggered"
QT_MOC_LITERAL(5, 56, 24), // "on_action_Save_triggered"
QT_MOC_LITERAL(6, 81, 26), // "on_action_Export_triggered"
QT_MOC_LITERAL(7, 108, 25), // "on_action_Close_triggered"
QT_MOC_LITERAL(8, 134, 38), // "on_actionAttach_Log_Variable_..."
QT_MOC_LITERAL(9, 173, 36), // "on_actionSet_Time_Interval_tr..."
QT_MOC_LITERAL(10, 210, 28), // "on_actionAutoscale_triggered"
QT_MOC_LITERAL(11, 239, 8), // "pChecked"
QT_MOC_LITERAL(12, 248, 16) // "autoscaleOffSlot"

    },
    "PlotWindow\0closed\0\0PlotWindow*\0"
    "on_action_Open_triggered\0"
    "on_action_Save_triggered\0"
    "on_action_Export_triggered\0"
    "on_action_Close_triggered\0"
    "on_actionAttach_Log_Variable_triggered\0"
    "on_actionSet_Time_Interval_triggered\0"
    "on_actionAutoscale_triggered\0pChecked\0"
    "autoscaleOffSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,

       0        // eod
};

void PlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closed((*reinterpret_cast< PlotWindow*(*)>(_a[1]))); break;
        case 1: _t->on_action_Open_triggered(); break;
        case 2: _t->on_action_Save_triggered(); break;
        case 3: _t->on_action_Export_triggered(); break;
        case 4: _t->on_action_Close_triggered(); break;
        case 5: _t->on_actionAttach_Log_Variable_triggered(); break;
        case 6: _t->on_actionSet_Time_Interval_triggered(); break;
        case 7: _t->on_actionAutoscale_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->autoscaleOffSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlotWindow::*)(PlotWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWindow::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlotWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_PlotWindow.data,
    qt_meta_data_PlotWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PlotWindow::closed(PlotWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
