/****************************************************************************
** Meta object code from reading C++ file 'PlatformVideoWindowPrivate.h'
**
** Created: Mon Sep 16 21:14:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WebCore/platform/graphics/gstreamer/PlatformVideoWindowPrivate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlatformVideoWindowPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebCore__FullScreenVideoWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   40,   40,   40, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   40,   40,   40, 0x0a,
      58,   40,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__FullScreenVideoWindow[] = {
    "WebCore::FullScreenVideoWindow\0closed()\0"
    "\0showFullScreen()\0hideCursor()\0"
};

void WebCore::FullScreenVideoWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FullScreenVideoWindow *_t = static_cast<FullScreenVideoWindow *>(_o);
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->showFullScreen(); break;
        case 2: _t->hideCursor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WebCore::FullScreenVideoWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::FullScreenVideoWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WebCore__FullScreenVideoWindow,
      qt_meta_data_WebCore__FullScreenVideoWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::FullScreenVideoWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::FullScreenVideoWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::FullScreenVideoWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__FullScreenVideoWindow))
        return static_cast<void*>(const_cast< FullScreenVideoWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int WebCore::FullScreenVideoWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WebCore::FullScreenVideoWindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
