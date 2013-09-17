/****************************************************************************
** Meta object code from reading C++ file 'childprocess.h'
**
** Created: Mon Sep 16 21:19:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "childprocess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'childprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChildProcessContext[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   30,   35,   35, 0x05,
      36,   56,   35,   35, 0x05,
      61,   56,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   35,   35,   35, 0x08,
     108,   35,   35,   35, 0x08,
     134,  165,   35,   35, 0x08,
     171,  207,   35,   35, 0x08,

 // methods: signature, parameters, type, tag, flags
     227,  241,   35,   35, 0x02,
     248,   35,   35,   35, 0x22,
     255,  277,   35,   35, 0x02,
     286,  314,  323,   35, 0x02,

 // properties: name, type, flags
     328,  332, 0x04095001,

       0        // eod
};

static const char qt_meta_stringdata_ChildProcessContext[] = {
    "ChildProcessContext\0exit(int)\0code\0\0"
    "stdoutData(QString)\0data\0stderrData(QString)\0"
    "_readyReadStandardOutput()\0"
    "_readyReadStandardError()\0"
    "_error(QProcess::ProcessError)\0error\0"
    "_finished(int,QProcess::ExitStatus)\0"
    "exitCode,exitStatus\0kill(QString)\0"
    "signal\0kill()\0_setEncoding(QString)\0"
    "encoding\0_start(QString,QStringList)\0"
    "cmd,args\0bool\0pid\0qint64\0"
};

void ChildProcessContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChildProcessContext *_t = static_cast<ChildProcessContext *>(_o);
        switch (_id) {
        case 0: _t->exit((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->stdoutData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->stderrData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->_readyReadStandardOutput(); break;
        case 4: _t->_readyReadStandardError(); break;
        case 5: _t->_error((*reinterpret_cast< const QProcess::ProcessError(*)>(_a[1]))); break;
        case 6: _t->_finished((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QProcess::ExitStatus(*)>(_a[2]))); break;
        case 7: _t->kill((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->kill(); break;
        case 9: _t->_setEncoding((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { bool _r = _t->_start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChildProcessContext::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChildProcessContext::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChildProcessContext,
      qt_meta_data_ChildProcessContext, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChildProcessContext::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChildProcessContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChildProcessContext::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChildProcessContext))
        return static_cast<void*>(const_cast< ChildProcessContext*>(this));
    return QObject::qt_metacast(_clname);
}

int ChildProcessContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint64*>(_v) = pid(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ChildProcessContext::exit(const int _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ChildProcessContext *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChildProcessContext::stdoutData(const QString & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ChildProcessContext *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChildProcessContext::stderrData(const QString & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ChildProcessContext *>(this), &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_ChildProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      13,   42,   43,   42, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_ChildProcess[] = {
    "ChildProcess\0_createChildProcessContext()\0"
    "\0QObject*\0"
};

void ChildProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChildProcess *_t = static_cast<ChildProcess *>(_o);
        switch (_id) {
        case 0: { QObject* _r = _t->_createChildProcessContext();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChildProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChildProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChildProcess,
      qt_meta_data_ChildProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChildProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChildProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChildProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChildProcess))
        return static_cast<void*>(const_cast< ChildProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int ChildProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
