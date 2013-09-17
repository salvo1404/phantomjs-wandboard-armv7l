/****************************************************************************
** Meta object code from reading C++ file 'phantom.h'
**
** Created: Mon Sep 16 21:18:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "phantom.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phantom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phantom[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
      10,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,   25,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   30,   47,   30, 0x0a,
      56,   30,   47,   30, 0x0a,
      74,   30,   47,   30, 0x0a,
      93,   30,   47,   30, 0x0a,
     108,   30,   47,   30, 0x0a,
     125,  153,   30,   30, 0x0a,
     175,  193,  204,   30, 0x0a,
     209,  234,  204,   30, 0x0a,
     242,   30,  252,   30, 0x0a,
     265,  288,  204,   30, 0x0a,
     295,  317,  204,   30, 0x0a,
     328,   30,   30,   30, 0x0a,
     343,   25,   30,   30, 0x0a,
     353,   30,   30,   30, 0x2a,
     360,   25,   30,   30, 0x0a,
     375,   30,   30,   30, 0x2a,
     387,  416,   30,   30, 0x08,
     420,   30,   30,   30, 0x08,

 // methods: signature, parameters, type, tag, flags
     436,   30,   47,   30, 0x02,

 // properties: name, type, flags
     458,  463, 0x0b095001,
     475,  495, 0x08095001,
     507,  519, 0x0a095103,
     527,  519, 0x0a095103,
     542,  519, 0x0a095001,
     553,  495, 0x08095001,
     561,   47, 0x88095001,
     566,  204, 0x01095103,
     234,  252, 0x09095103,
     581,  204, 0x01095001,

       0        // eod
};

static const char qt_meta_stringdata_Phantom[] = {
    "Phantom\0aboutToExit(int)\0code\0\0"
    "createWebPage()\0QObject*\0createWebServer()\0"
    "createFilesystem()\0createSystem()\0"
    "createCallback()\0loadModule(QString,QString)\0"
    "moduleSource,filename\0injectJs(QString)\0"
    "jsFilePath\0bool\0setCookies(QVariantList)\0"
    "cookies\0cookies()\0QVariantList\0"
    "addCookie(QVariantMap)\0cookie\0"
    "deleteCookie(QString)\0cookieName\0"
    "clearCookies()\0exit(int)\0exit()\0"
    "debugExit(int)\0debugExit()\0"
    "printConsoleMessage(QString)\0msg\0"
    "onInitialized()\0_createChildProcess()\0"
    "args\0QStringList\0defaultPageSettings\0"
    "QVariantMap\0libraryPath\0QString\0"
    "outputEncoding\0scriptName\0version\0"
    "page\0cookiesEnabled\0webdriverMode\0"
};

void Phantom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Phantom *_t = static_cast<Phantom *>(_o);
        switch (_id) {
        case 0: _t->aboutToExit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { QObject* _r = _t->createWebPage();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 2: { QObject* _r = _t->createWebServer();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 3: { QObject* _r = _t->createFilesystem();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 4: { QObject* _r = _t->createSystem();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 5: { QObject* _r = _t->createCallback();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 6: _t->loadModule((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: { bool _r = _t->injectJs((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->setCookies((*reinterpret_cast< const QVariantList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QVariantList _r = _t->cookies();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->addCookie((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->deleteCookie((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->clearCookies(); break;
        case 13: _t->exit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->exit(); break;
        case 15: _t->debugExit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->debugExit(); break;
        case 17: _t->printConsoleMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->onInitialized(); break;
        case 19: { QObject* _r = _t->_createChildProcess();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Phantom::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phantom::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Phantom,
      qt_meta_data_Phantom, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phantom::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phantom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phantom::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phantom))
        return static_cast<void*>(const_cast< Phantom*>(this));
    return QObject::qt_metacast(_clname);
}

int Phantom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = args(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = defaultPageSettings(); break;
        case 2: *reinterpret_cast< QString*>(_v) = libraryPath(); break;
        case 3: *reinterpret_cast< QString*>(_v) = outputEncoding(); break;
        case 4: *reinterpret_cast< QString*>(_v) = scriptName(); break;
        case 5: *reinterpret_cast< QVariantMap*>(_v) = version(); break;
        case 6: *reinterpret_cast< QObject**>(_v) = page(); break;
        case 7: *reinterpret_cast< bool*>(_v) = areCookiesEnabled(); break;
        case 8: *reinterpret_cast< QVariantList*>(_v) = cookies(); break;
        case 9: *reinterpret_cast< bool*>(_v) = webdriverMode(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setLibraryPath(*reinterpret_cast< QString*>(_v)); break;
        case 3: setOutputEncoding(*reinterpret_cast< QString*>(_v)); break;
        case 7: setCookiesEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 8: setCookies(*reinterpret_cast< QVariantList*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Phantom::aboutToExit(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
