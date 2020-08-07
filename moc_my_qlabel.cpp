/****************************************************************************
** Meta object code from reading C++ file 'my_qlabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../paraps/my_qlabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'my_qlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_my_qlabel_t {
    QByteArrayData data[7];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_my_qlabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_my_qlabel_t qt_meta_stringdata_my_qlabel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "my_qlabel"
QT_MOC_LITERAL(1, 10, 7), // "clicked"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "farmclicked"
QT_MOC_LITERAL(4, 31, 3), // "im1"
QT_MOC_LITERAL(5, 35, 3), // "im7"
QT_MOC_LITERAL(6, 39, 3) // "im4"

    },
    "my_qlabel\0clicked\0\0farmclicked\0im1\0"
    "im7\0im4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_my_qlabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void my_qlabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<my_qlabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->farmclicked(); break;
        case 2: _t->im1(); break;
        case 3: _t->im7(); break;
        case 4: _t->im4(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (my_qlabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&my_qlabel::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (my_qlabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&my_qlabel::farmclicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (my_qlabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&my_qlabel::im1)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (my_qlabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&my_qlabel::im7)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (my_qlabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&my_qlabel::im4)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject my_qlabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_my_qlabel.data,
    qt_meta_data_my_qlabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *my_qlabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *my_qlabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_my_qlabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int my_qlabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void my_qlabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void my_qlabel::farmclicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void my_qlabel::im1()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void my_qlabel::im7()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void my_qlabel::im4()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
