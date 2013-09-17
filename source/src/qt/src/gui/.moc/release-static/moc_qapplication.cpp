/****************************************************************************
** Meta object code from reading C++ file 'qapplication.h'
**
** Created: Mon Sep 16 14:52:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
      12,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   32,   32,   32, 0x05,
      33,   65,   32,   32, 0x05,
      73,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,  118,   32,   32, 0x0a,
     124,  148,   32,   32, 0x0a,
     156,   32,  173,   32, 0x0a,
     178,   32,   32,   32, 0x0a,
     196,   32,   32,   32, 0x0a,

 // properties: name, type, flags
     206,  222, 0x0009510b,
     242,  253, 0x45095103,
     259,  275, 0x02095103,
     279,  275, 0x02095103,
     299,  275, 0x02095103,
     321,  275, 0x02095103,
     338,  350, 0x15095103,
     356,  275, 0x02095103,
     370,  275, 0x02095103,
     388,  173, 0x01095103,
     411,  422, 0x0a095103,
     430,  173, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QApplication[] = {
    "QApplication\0lastWindowClosed()\0\0"
    "focusChanged(QWidget*,QWidget*)\0old,now\0"
    "fontDatabaseChanged()\0setStyleSheet(QString)\0"
    "sheet\0setAutoSipEnabled(bool)\0enabled\0"
    "autoSipEnabled()\0bool\0closeAllWindows()\0"
    "aboutQt()\0layoutDirection\0Qt::LayoutDirection\0"
    "windowIcon\0QIcon\0cursorFlashTime\0int\0"
    "doubleClickInterval\0keyboardInputInterval\0"
    "wheelScrollLines\0globalStrut\0QSize\0"
    "startDragTime\0startDragDistance\0"
    "quitOnLastWindowClosed\0styleSheet\0"
    "QString\0autoSipEnabled\0"
};

void QApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QApplication *_t = static_cast<QApplication *>(_o);
        switch (_id) {
        case 0: _t->lastWindowClosed(); break;
        case 1: _t->focusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 2: _t->fontDatabaseChanged(); break;
        case 3: _t->setStyleSheet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setAutoSipEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->autoSipEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->closeAllWindows(); break;
        case 7: _t->aboutQt(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QApplication::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_QApplication,
      qt_meta_data_QApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QApplication))
        return static_cast<void*>(const_cast< QApplication*>(this));
    return QCoreApplication::qt_metacast(_clname);
}

int QApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::LayoutDirection*>(_v) = layoutDirection(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = windowIcon(); break;
        case 2: *reinterpret_cast< int*>(_v) = cursorFlashTime(); break;
        case 3: *reinterpret_cast< int*>(_v) = doubleClickInterval(); break;
        case 4: *reinterpret_cast< int*>(_v) = keyboardInputInterval(); break;
        case 5: *reinterpret_cast< int*>(_v) = wheelScrollLines(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = globalStrut(); break;
        case 7: *reinterpret_cast< int*>(_v) = startDragTime(); break;
        case 8: *reinterpret_cast< int*>(_v) = startDragDistance(); break;
        case 9: *reinterpret_cast< bool*>(_v) = quitOnLastWindowClosed(); break;
        case 10: *reinterpret_cast< QString*>(_v) = styleSheet(); break;
        case 11: *reinterpret_cast< bool*>(_v) = autoSipEnabled(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 1: setWindowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: setCursorFlashTime(*reinterpret_cast< int*>(_v)); break;
        case 3: setDoubleClickInterval(*reinterpret_cast< int*>(_v)); break;
        case 4: setKeyboardInputInterval(*reinterpret_cast< int*>(_v)); break;
        case 5: setWheelScrollLines(*reinterpret_cast< int*>(_v)); break;
        case 6: setGlobalStrut(*reinterpret_cast< QSize*>(_v)); break;
        case 7: setStartDragTime(*reinterpret_cast< int*>(_v)); break;
        case 8: setStartDragDistance(*reinterpret_cast< int*>(_v)); break;
        case 9: setQuitOnLastWindowClosed(*reinterpret_cast< bool*>(_v)); break;
        case 10: setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 11: setAutoSipEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QApplication::lastWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QApplication::focusChanged(QWidget * _t1, QWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QApplication::fontDatabaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
