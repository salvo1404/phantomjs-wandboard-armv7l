/****************************************************************************
** Meta object code from reading C++ file 'qtablewidget.h'
**
** Created: Mon Sep 16 15:30:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qtablewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtablewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTableWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       2,  174, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   44,   49,   49, 0x05,
      50,   44,   49,   49, 0x05,
      81,   44,   49,   49, 0x05,
     118,   44,   49,   49, 0x05,
     151,   44,   49,   49, 0x05,
     182,   44,   49,   49, 0x05,
     213,  269,   49,   49, 0x05,
     286,   49,   49,   49, 0x05,
     309,  330,   49,   49, 0x05,
     341,  330,   49,   49, 0x05,
     362,  330,   49,   49, 0x05,
     389,  330,   49,   49, 0x05,
     412,  330,   49,   49, 0x05,
     433,  330,   49,   49, 0x05,
     454,  490,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
     542,  610,   49,   49, 0x0a,
     620,   44,   49,   49, 0x2a,
     658,  673,   49,   49, 0x0a,
     677,  695,   49,   49, 0x0a,
     702,  673,   49,   49, 0x0a,
     717,  695,   49,   49, 0x0a,
     735,   49,   49,   49, 0x0a,
     743,   49,   49,   49, 0x0a,
     759,  791,   49,   49, 0x08,
     797,  791,   49,   49, 0x08,
     829,  791,   49,   49, 0x08,
     867,  791,   49,   49, 0x08,
     901,  791,   49,   49, 0x08,
     933,  791,   49,   49, 0x08,
     965, 1016,   49,   49, 0x08,
    1033,   49,   49,   49, 0x08,
    1043, 1083,   49,   49, 0x08,

 // properties: name, type, flags
    1103, 1112, 0x02095103,
    1116, 1112, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QTableWidget[] = {
    "QTableWidget\0itemPressed(QTableWidgetItem*)\0"
    "item\0\0itemClicked(QTableWidgetItem*)\0"
    "itemDoubleClicked(QTableWidgetItem*)\0"
    "itemActivated(QTableWidgetItem*)\0"
    "itemEntered(QTableWidgetItem*)\0"
    "itemChanged(QTableWidgetItem*)\0"
    "currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "current,previous\0itemSelectionChanged()\0"
    "cellPressed(int,int)\0row,column\0"
    "cellClicked(int,int)\0cellDoubleClicked(int,int)\0"
    "cellActivated(int,int)\0cellEntered(int,int)\0"
    "cellChanged(int,int)\0"
    "currentCellChanged(int,int,int,int)\0"
    "currentRow,currentColumn,previousRow,previousColumn\0"
    "scrollToItem(const QTableWidgetItem*,QAbstractItemView::ScrollHint)\0"
    "item,hint\0scrollToItem(const QTableWidgetItem*)\0"
    "insertRow(int)\0row\0insertColumn(int)\0"
    "column\0removeRow(int)\0removeColumn(int)\0"
    "clear()\0clearContents()\0"
    "_q_emitItemPressed(QModelIndex)\0index\0"
    "_q_emitItemClicked(QModelIndex)\0"
    "_q_emitItemDoubleClicked(QModelIndex)\0"
    "_q_emitItemActivated(QModelIndex)\0"
    "_q_emitItemEntered(QModelIndex)\0"
    "_q_emitItemChanged(QModelIndex)\0"
    "_q_emitCurrentItemChanged(QModelIndex,QModelIndex)\0"
    "previous,current\0_q_sort()\0"
    "_q_dataChanged(QModelIndex,QModelIndex)\0"
    "topLeft,bottomRight\0rowCount\0int\0"
    "columnCount\0"
};

void QTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTableWidget *_t = static_cast<QTableWidget *>(_o);
        switch (_id) {
        case 0: _t->itemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->itemActivated((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->itemEntered((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->itemSelectionChanged(); break;
        case 8: _t->cellPressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->cellActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->cellEntered((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 15: _t->scrollToItem((*reinterpret_cast< const QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemView::ScrollHint(*)>(_a[2]))); break;
        case 16: _t->scrollToItem((*reinterpret_cast< const QTableWidgetItem*(*)>(_a[1]))); break;
        case 17: _t->insertRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->insertColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->removeRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->removeColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->clear(); break;
        case 22: _t->clearContents(); break;
        case 23: _t->d_func()->_q_emitItemPressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 24: _t->d_func()->_q_emitItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 25: _t->d_func()->_q_emitItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 26: _t->d_func()->_q_emitItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 27: _t->d_func()->_q_emitItemEntered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 28: _t->d_func()->_q_emitItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 29: _t->d_func()->_q_emitCurrentItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 30: _t->d_func()->_q_sort(); break;
        case 31: _t->d_func()->_q_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTableWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTableWidget::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_QTableWidget,
      qt_meta_data_QTableWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTableWidget))
        return static_cast<void*>(const_cast< QTableWidget*>(this));
    return QTableView::qt_metacast(_clname);
}

int QTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = rowCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = columnCount(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRowCount(*reinterpret_cast< int*>(_v)); break;
        case 1: setColumnCount(*reinterpret_cast< int*>(_v)); break;
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

// SIGNAL 0
void QTableWidget::itemPressed(QTableWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTableWidget::itemClicked(QTableWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTableWidget::itemDoubleClicked(QTableWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTableWidget::itemActivated(QTableWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTableWidget::itemEntered(QTableWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTableWidget::itemChanged(QTableWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QTableWidget::currentItemChanged(QTableWidgetItem * _t1, QTableWidgetItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QTableWidget::itemSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QTableWidget::cellPressed(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QTableWidget::cellClicked(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QTableWidget::cellDoubleClicked(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QTableWidget::cellActivated(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QTableWidget::cellEntered(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QTableWidget::cellChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QTableWidget::currentCellChanged(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
