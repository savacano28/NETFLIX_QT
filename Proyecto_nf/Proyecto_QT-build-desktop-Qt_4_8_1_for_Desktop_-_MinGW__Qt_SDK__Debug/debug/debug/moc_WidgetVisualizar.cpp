/****************************************************************************
** Meta object code from reading C++ file 'WidgetVisualizar.h'
**
** Created: Sun 18. Nov 20:03:49 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Proyecto_QT/WidgetVisualizar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WidgetVisualizar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetVisualizar[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      28,   26,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WidgetVisualizar[] = {
    "WidgetVisualizar\0\0armar()\0,\0"
    "devolverTabla(int,int)\0"
};

const QMetaObject WidgetVisualizar::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WidgetVisualizar,
      qt_meta_data_WidgetVisualizar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetVisualizar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetVisualizar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetVisualizar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetVisualizar))
        return static_cast<void*>(const_cast< WidgetVisualizar*>(this));
    return QDialog::qt_metacast(_clname);
}

int WidgetVisualizar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: armar(); break;
        case 1: devolverTabla((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
