/****************************************************************************
** Meta object code from reading C++ file 'qlocalsocket.h'
**
** Created: Mon Sep 16 14:49:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../socket/qlocalsocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlocalsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLocalSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   25,   25,   25, 0x05,
      26,   25,   25,   25, 0x05,
      41,   79,   25,   25, 0x05,
      91,  136,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     148,   25,   25,   25, 0x08,
     194,   25,   25,   25, 0x08,
     233,   25,   25,   25, 0x08,
     254,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLocalSocket[] = {
    "QLocalSocket\0connected()\0\0disconnected()\0"
    "error(QLocalSocket::LocalSocketError)\0"
    "socketError\0stateChanged(QLocalSocket::LocalSocketState)\0"
    "socketState\0_q_stateChanged(QAbstractSocket::SocketState)\0"
    "_q_error(QAbstractSocket::SocketError)\0"
    "_q_connectToSocket()\0_q_abortConnectionAttempt()\0"
};

void QLocalSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QLocalSocket *_t = static_cast<QLocalSocket *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->error((*reinterpret_cast< QLocalSocket::LocalSocketError(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QLocalSocket::LocalSocketState(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_connectToSocket(); break;
        case 7: _t->d_func()->_q_abortConnectionAttempt(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QLocalSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLocalSocket::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QLocalSocket,
      qt_meta_data_QLocalSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLocalSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLocalSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLocalSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLocalSocket))
        return static_cast<void*>(const_cast< QLocalSocket*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QLocalSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QLocalSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QLocalSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QLocalSocket::error(QLocalSocket::LocalSocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QLocalSocket::stateChanged(QLocalSocket::LocalSocketState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
