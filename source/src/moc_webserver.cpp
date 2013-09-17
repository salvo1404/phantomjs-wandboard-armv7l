/****************************************************************************
** Meta object code from reading C++ file 'webserver.h'
**
** Created: Mon Sep 16 21:18:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "webserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   40,   57,   57, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   92,  105,   57, 0x0a,
     110,   57,  117,   57, 0x0a,
     125,   57,   57,   57, 0x0a,

 // properties: name, type, flags
     133,  117, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_WebServer[] = {
    "WebServer\0newRequest(QVariant,QObject*)\0"
    "request,response\0\0listenOnPort(QString,QVariantMap)\0"
    "port,options\0bool\0port()\0QString\0"
    "close()\0port\0"
};

void WebServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebServer *_t = static_cast<WebServer *>(_o);
        switch (_id) {
        case 0: _t->newRequest((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 1: { bool _r = _t->listenOnPort((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->port();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->close(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebServer,
      qt_meta_data_WebServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebServer))
        return static_cast<void*>(const_cast< WebServer*>(this));
    return QObject::qt_metacast(_clname);
}

int WebServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = port(); break;
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
void WebServer::newRequest(QVariant _t1, QObject * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_WebServerResponse[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   45,   64,   64, 0x0a,
      65,   81,   64,   64, 0x0a,
      86,  107,   64,   64, 0x0a,
     116,   64,   64,   64, 0x0a,
     124,   64,   64,   64, 0x0a,
     142,   64,  155,   64, 0x0a,
     159,  178,   64,   64, 0x0a,
     183,  199,  204,   64, 0x0a,
     212,  239,   64,   64, 0x0a,
     250,   64,  260,   64, 0x0a,
     272,  296,   64,   64, 0x0a,

 // properties: name, type, flags
     304,  155, 0x02095103,
     296,  260, 0x08095103,

       0        // eod
};

static const char qt_meta_stringdata_WebServerResponse[] = {
    "WebServerResponse\0writeHead(int,QVariantMap)\0"
    "statusCode,headers\0\0write(QVariant)\0"
    "data\0setEncoding(QString)\0encoding\0"
    "close()\0closeGracefully()\0statusCode()\0"
    "int\0setStatusCode(int)\0code\0header(QString)\0"
    "name\0QString\0setHeader(QString,QString)\0"
    "name,value\0headers()\0QVariantMap\0"
    "setHeaders(QVariantMap)\0headers\0"
    "statusCode\0"
};

void WebServerResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebServerResponse *_t = static_cast<WebServerResponse *>(_o);
        switch (_id) {
        case 0: _t->writeHead((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 1: _t->write((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->setEncoding((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->close(); break;
        case 4: _t->closeGracefully(); break;
        case 5: { int _r = _t->statusCode();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->setStatusCode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { QString _r = _t->header((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: _t->setHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: { QVariantMap _r = _t->headers();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 10: _t->setHeaders((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebServerResponse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebServerResponse::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebServerResponse,
      qt_meta_data_WebServerResponse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebServerResponse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebServerResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebServerResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebServerResponse))
        return static_cast<void*>(const_cast< WebServerResponse*>(this));
    return QObject::qt_metacast(_clname);
}

int WebServerResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< int*>(_v) = statusCode(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = headers(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStatusCode(*reinterpret_cast< int*>(_v)); break;
        case 1: setHeaders(*reinterpret_cast< QVariantMap*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
