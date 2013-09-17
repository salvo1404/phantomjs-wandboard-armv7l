/****************************************************************************
** Meta object code from reading C++ file 'config.h'
**
** Created: Mon Sep 16 21:19:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "config.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Config[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      22,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,   29,   32,   32, 0x0a,
      33,   64,   32,   32, 0x0a,
      77,  107,   32,   32, 0x0a,
     119,  140,   32,   32, 0x0a,

 // properties: name, type, flags
     146,  158, 0x0a095103,
     166,  183, 0x01095103,
     188,  205, 0x02095103,
     209,  183, 0x01095103,
     225,  183, 0x01095103,
     255,  158, 0x0a095103,
     270,  158, 0x0a095103,
     280,  158, 0x0a095103,
     286,  158, 0x0a095103,
     296,  158, 0x0a095103,
     311,  183, 0x01095103,
     330,  158, 0x0a095103,
     349,  205, 0x02095103,
     376,  183, 0x01095103,
     395,  183, 0x01095103,
     420,  183, 0x01095103,
     446,  158, 0x0a095103,
     458,  158, 0x0a095103,
     478,  158, 0x0a095103,
     488,  158, 0x0a095103,
     505,  158, 0x0a095103,
     523,  158, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_Config[] = {
    "Config\0handleSwitch(QString)\0sw\0\0"
    "handleOption(QString,QVariant)\0"
    "option,value\0handleParam(QString,QVariant)\0"
    "param,value\0handleError(QString)\0error\0"
    "cookiesFile\0QString\0diskCacheEnabled\0"
    "bool\0maxDiskCacheSize\0int\0ignoreSslErrors\0"
    "localToRemoteUrlAccessEnabled\0"
    "outputEncoding\0proxyType\0proxy\0proxyAuth\0"
    "scriptEncoding\0webSecurityEnabled\0"
    "offlineStoragePath\0offlineStorageDefaultQuota\0"
    "printDebugMessages\0javascriptCanOpenWindows\0"
    "javascriptCanCloseWindows\0sslProtocol\0"
    "sslCertificatesPath\0webdriver\0"
    "webdriverLogFile\0webdriverLogLevel\0"
    "webdriverSeleniumGridHub\0"
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Config *_t = static_cast<Config *>(_o);
        switch (_id) {
        case 0: _t->handleSwitch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handleOption((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 2: _t->handleParam((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->handleError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Config::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Config::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Config,
      qt_meta_data_Config, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Config::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Config::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Config))
        return static_cast<void*>(const_cast< Config*>(this));
    return QObject::qt_metacast(_clname);
}

int Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = cookiesFile(); break;
        case 1: *reinterpret_cast< bool*>(_v) = diskCacheEnabled(); break;
        case 2: *reinterpret_cast< int*>(_v) = maxDiskCacheSize(); break;
        case 3: *reinterpret_cast< bool*>(_v) = ignoreSslErrors(); break;
        case 4: *reinterpret_cast< bool*>(_v) = localToRemoteUrlAccessEnabled(); break;
        case 5: *reinterpret_cast< QString*>(_v) = outputEncoding(); break;
        case 6: *reinterpret_cast< QString*>(_v) = proxyType(); break;
        case 7: *reinterpret_cast< QString*>(_v) = proxy(); break;
        case 8: *reinterpret_cast< QString*>(_v) = proxyAuth(); break;
        case 9: *reinterpret_cast< QString*>(_v) = scriptEncoding(); break;
        case 10: *reinterpret_cast< bool*>(_v) = webSecurityEnabled(); break;
        case 11: *reinterpret_cast< QString*>(_v) = offlineStoragePath(); break;
        case 12: *reinterpret_cast< int*>(_v) = offlineStorageDefaultQuota(); break;
        case 13: *reinterpret_cast< bool*>(_v) = printDebugMessages(); break;
        case 14: *reinterpret_cast< bool*>(_v) = javascriptCanOpenWindows(); break;
        case 15: *reinterpret_cast< bool*>(_v) = javascriptCanCloseWindows(); break;
        case 16: *reinterpret_cast< QString*>(_v) = sslProtocol(); break;
        case 17: *reinterpret_cast< QString*>(_v) = sslCertificatesPath(); break;
        case 18: *reinterpret_cast< QString*>(_v) = webdriver(); break;
        case 19: *reinterpret_cast< QString*>(_v) = webdriverLogFile(); break;
        case 20: *reinterpret_cast< QString*>(_v) = webdriverLogLevel(); break;
        case 21: *reinterpret_cast< QString*>(_v) = webdriverSeleniumGridHub(); break;
        }
        _id -= 22;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCookiesFile(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDiskCacheEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: setMaxDiskCacheSize(*reinterpret_cast< int*>(_v)); break;
        case 3: setIgnoreSslErrors(*reinterpret_cast< bool*>(_v)); break;
        case 4: setLocalToRemoteUrlAccessEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: setOutputEncoding(*reinterpret_cast< QString*>(_v)); break;
        case 6: setProxyType(*reinterpret_cast< QString*>(_v)); break;
        case 7: setProxy(*reinterpret_cast< QString*>(_v)); break;
        case 8: setProxyAuth(*reinterpret_cast< QString*>(_v)); break;
        case 9: setScriptEncoding(*reinterpret_cast< QString*>(_v)); break;
        case 10: setWebSecurityEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 11: setOfflineStoragePath(*reinterpret_cast< QString*>(_v)); break;
        case 12: setOfflineStorageDefaultQuota(*reinterpret_cast< int*>(_v)); break;
        case 13: setPrintDebugMessages(*reinterpret_cast< bool*>(_v)); break;
        case 14: setJavascriptCanOpenWindows(*reinterpret_cast< bool*>(_v)); break;
        case 15: setJavascriptCanCloseWindows(*reinterpret_cast< bool*>(_v)); break;
        case 16: setSslProtocol(*reinterpret_cast< QString*>(_v)); break;
        case 17: setSslCertificatesPath(*reinterpret_cast< QString*>(_v)); break;
        case 18: setWebdriver(*reinterpret_cast< QString*>(_v)); break;
        case 19: setWebdriverLogFile(*reinterpret_cast< QString*>(_v)); break;
        case 20: setWebdriverLogLevel(*reinterpret_cast< QString*>(_v)); break;
        case 21: setWebdriverSeleniumGridHub(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 22;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
