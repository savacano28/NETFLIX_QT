/****************************************************************************
** Meta object code from reading C++ file 'WidgetAgregarStreamVenezuela.h'
**
** Created: Sun 18. Nov 09:46:31 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Proyecto_QT/WidgetAgregarStreamVenezuela.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WidgetAgregarStreamVenezuela.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetAgregarStreamVenezuela[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x0a,
      47,   45,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WidgetAgregarStreamVenezuela[] = {
    "WidgetAgregarStreamVenezuela\0\0"
    "agregarDatos()\0,\0ponerTabla(int,int)\0"
};

void WidgetAgregarStreamVenezuela::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetAgregarStreamVenezuela *_t = static_cast<WidgetAgregarStreamVenezuela *>(_o);
        switch (_id) {
        case 0: _t->agregarDatos(); break;
        case 1: _t->ponerTabla((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WidgetAgregarStreamVenezuela::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WidgetAgregarStreamVenezuela::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WidgetAgregarStreamVenezuela,
      qt_meta_data_WidgetAgregarStreamVenezuela, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetAgregarStreamVenezuela::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetAgregarStreamVenezuela::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetAgregarStreamVenezuela::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetAgregarStreamVenezuela))
        return static_cast<void*>(const_cast< WidgetAgregarStreamVenezuela*>(this));
    return QDialog::qt_metacast(_clname);
}

int WidgetAgregarStreamVenezuela::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
