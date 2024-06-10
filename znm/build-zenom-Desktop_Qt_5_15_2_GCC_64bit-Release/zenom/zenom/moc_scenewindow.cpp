/****************************************************************************
** Meta object code from reading C++ file 'scenewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../zenom/zenom/zenom/scene/scenewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scenewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SceneWindow_t {
    QByteArrayData data[16];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneWindow_t qt_meta_stringdata_SceneWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SceneWindow"
QT_MOC_LITERAL(1, 12, 6), // "closed"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "SceneWindow*"
QT_MOC_LITERAL(4, 33, 14), // "warningMessage"
QT_MOC_LITERAL(5, 48, 5), // "pText"
QT_MOC_LITERAL(6, 54, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(7, 78, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(8, 103, 20), // "viewpointChangedSlot"
QT_MOC_LITERAL(9, 124, 5), // "pName"
QT_MOC_LITERAL(10, 130, 37), // "on_actionPrevious_Viewpoint_t..."
QT_MOC_LITERAL(11, 168, 33), // "on_actionNext_Viewpoint_trigg..."
QT_MOC_LITERAL(12, 202, 38), // "on_actionReturn_to_Viewpoint_..."
QT_MOC_LITERAL(13, 241, 35), // "on_actionCreate_Viewpoint_tri..."
QT_MOC_LITERAL(14, 277, 43), // "on_actionRemove_Current_Viewp..."
QT_MOC_LITERAL(15, 321, 34) // "on_actionBind_Parameters_trig..."

    },
    "SceneWindow\0closed\0\0SceneWindow*\0"
    "warningMessage\0pText\0on_actionOpen_triggered\0"
    "on_actionClose_triggered\0viewpointChangedSlot\0"
    "pName\0on_actionPrevious_Viewpoint_triggered\0"
    "on_actionNext_Viewpoint_triggered\0"
    "on_actionReturn_to_Viewpoint_triggered\0"
    "on_actionCreate_Viewpoint_triggered\0"
    "on_actionRemove_Current_Viewpoint_triggered\0"
    "on_actionBind_Parameters_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SceneWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SceneWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed((*reinterpret_cast< SceneWindow*(*)>(_a[1]))); break;
        case 1: _t->warningMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_actionOpen_triggered(); break;
        case 3: _t->on_actionClose_triggered(); break;
        case 4: _t->viewpointChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_actionPrevious_Viewpoint_triggered(); break;
        case 6: _t->on_actionNext_Viewpoint_triggered(); break;
        case 7: _t->on_actionReturn_to_Viewpoint_triggered(); break;
        case 8: _t->on_actionCreate_Viewpoint_triggered(); break;
        case 9: _t->on_actionRemove_Current_Viewpoint_triggered(); break;
        case 10: _t->on_actionBind_Parameters_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SceneWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SceneWindow::*)(SceneWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneWindow::closed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SceneWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneWindow::warningMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SceneWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SceneWindow.data,
    qt_meta_data_SceneWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SceneWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SceneWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SceneWindow::closed(SceneWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SceneWindow::warningMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
