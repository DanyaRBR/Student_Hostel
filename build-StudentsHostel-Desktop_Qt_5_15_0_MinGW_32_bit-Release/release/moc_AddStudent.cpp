/****************************************************************************
** Meta object code from reading C++ file 'AddStudent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../StudentsHostel/AddStudent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddStudent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddStudent_t {
    QByteArrayData data[9];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddStudent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddStudent_t qt_meta_stringdata_AddStudent = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AddStudent"
QT_MOC_LITERAL(1, 11, 14), // "isStudentExist"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "password"
QT_MOC_LITERAL(4, 36, 5), // "count"
QT_MOC_LITERAL(5, 42, 13), // "isNumberexist"
QT_MOC_LITERAL(6, 56, 9), // "CheckRoom"
QT_MOC_LITERAL(7, 66, 12), // "numberofroom"
QT_MOC_LITERAL(8, 79, 6) // "accept"

    },
    "AddStudent\0isStudentExist\0\0password\0"
    "count\0isNumberexist\0CheckRoom\0"
    "numberofroom\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddStudent[] = {

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
       1,    2,   34,    2, 0x0a /* Public */,
       5,    1,   39,    2, 0x0a /* Public */,
       6,    2,   42,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Bool, QMetaType::Int,    3,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    7,    4,
    QMetaType::Void,

       0        // eod
};

void AddStudent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddStudent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->isStudentExist((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->isNumberexist((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->CheckRoom((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->accept(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddStudent::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddStudent.data,
    qt_meta_data_AddStudent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddStudent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddStudent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddStudent.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddStudent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
