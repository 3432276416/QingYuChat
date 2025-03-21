/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../login.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSLoginENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLoginENDCLASS = QtMocHelpers::stringData(
    "Login",
    "loginMenuClose",
    "",
    "loginSuccessSIGNAL",
    "account",
    "loginFailSIGNAL",
    "on_ckb_autoLogin_toggled",
    "checked",
    "on_ckb_rememberPwd_toggled",
    "on_register_btn_clicked",
    "on_login_btn_clicked",
    "onReadyRead",
    "sendLogin"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLoginENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[6];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[8];
    char stringdata5[16];
    char stringdata6[25];
    char stringdata7[8];
    char stringdata8[27];
    char stringdata9[24];
    char stringdata10[21];
    char stringdata11[12];
    char stringdata12[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLoginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLoginENDCLASS_t qt_meta_stringdata_CLASSLoginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Login"
        QT_MOC_LITERAL(6, 14),  // "loginMenuClose"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 18),  // "loginSuccessSIGNAL"
        QT_MOC_LITERAL(41, 7),  // "account"
        QT_MOC_LITERAL(49, 15),  // "loginFailSIGNAL"
        QT_MOC_LITERAL(65, 24),  // "on_ckb_autoLogin_toggled"
        QT_MOC_LITERAL(90, 7),  // "checked"
        QT_MOC_LITERAL(98, 26),  // "on_ckb_rememberPwd_toggled"
        QT_MOC_LITERAL(125, 23),  // "on_register_btn_clicked"
        QT_MOC_LITERAL(149, 20),  // "on_login_btn_clicked"
        QT_MOC_LITERAL(170, 11),  // "onReadyRead"
        QT_MOC_LITERAL(182, 9)   // "sendLogin"
    },
    "Login",
    "loginMenuClose",
    "",
    "loginSuccessSIGNAL",
    "account",
    "loginFailSIGNAL",
    "on_ckb_autoLogin_toggled",
    "checked",
    "on_ckb_rememberPwd_toggled",
    "on_register_btn_clicked",
    "on_login_btn_clicked",
    "onReadyRead",
    "sendLogin"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLoginENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    1,   69,    2, 0x06,    2 /* Public */,
       5,    0,   72,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   73,    2, 0x08,    5 /* Private */,
       8,    1,   76,    2, 0x08,    7 /* Private */,
       9,    0,   79,    2, 0x08,    9 /* Private */,
      10,    0,   80,    2, 0x08,   10 /* Private */,
      11,    0,   81,    2, 0x08,   11 /* Private */,
      12,    0,   82,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Login::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSLoginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLoginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLoginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Login, std::true_type>,
        // method 'loginMenuClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loginSuccessSIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'loginFailSIGNAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ckb_autoLogin_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_ckb_rememberPwd_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_register_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Login *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loginMenuClose(); break;
        case 1: _t->loginSuccessSIGNAL((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->loginFailSIGNAL(); break;
        case 3: _t->on_ckb_autoLogin_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_ckb_rememberPwd_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_register_btn_clicked(); break;
        case 6: _t->on_login_btn_clicked(); break;
        case 7: _t->onReadyRead(); break;
        case 8: _t->sendLogin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Login::*)();
            if (_t _q_method = &Login::loginMenuClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Login::*)(const QString );
            if (_t _q_method = &Login::loginSuccessSIGNAL; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Login::*)();
            if (_t _q_method = &Login::loginFailSIGNAL; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLoginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Login::loginMenuClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Login::loginSuccessSIGNAL(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Login::loginFailSIGNAL()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
