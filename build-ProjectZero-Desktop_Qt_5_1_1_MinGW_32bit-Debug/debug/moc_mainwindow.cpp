/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjectZero/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 23),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 23),
QT_MOC_LITERAL(4, 60, 28),
QT_MOC_LITERAL(5, 89, 31),
QT_MOC_LITERAL(6, 121, 28),
QT_MOC_LITERAL(7, 150, 23),
QT_MOC_LITERAL(8, 174, 21),
QT_MOC_LITERAL(9, 196, 25),
QT_MOC_LITERAL(10, 222, 4),
QT_MOC_LITERAL(11, 227, 31),
QT_MOC_LITERAL(12, 259, 33),
QT_MOC_LITERAL(13, 293, 25),
QT_MOC_LITERAL(14, 319, 32),
QT_MOC_LITERAL(15, 352, 22),
QT_MOC_LITERAL(16, 375, 4),
QT_MOC_LITERAL(17, 380, 23)
    },
    "MainWindow\0on_pushButton_4_clicked\0\0"
    "on_pushButton_5_clicked\0"
    "on_addFromFileButton_clicked\0"
    "on_displayLibraryButton_clicked\0"
    "on_addManuallyButton_clicked\0"
    "on_searchButton_clicked\0on_pushButton_clicked\0"
    "on_searchEdit_textChanged\0arg1\0"
    "on_searchByNameEdit_textChanged\0"
    "on_searchByAuthorEdit_textChanged\0"
    "on_lineEdit_2_textChanged\0"
    "on_searchByIndexEdit_textChanged\0"
    "on_label_8_linkHovered\0link\0"
    "on_pushButton_2_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08,
       3,    0,   85,    2, 0x08,
       4,    0,   86,    2, 0x08,
       5,    0,   87,    2, 0x08,
       6,    0,   88,    2, 0x08,
       7,    0,   89,    2, 0x08,
       8,    0,   90,    2, 0x08,
       9,    1,   91,    2, 0x08,
      11,    1,   94,    2, 0x08,
      12,    1,   97,    2, 0x08,
      13,    1,  100,    2, 0x08,
      14,    1,  103,    2, 0x08,
      15,    1,  106,    2, 0x08,
      17,    0,  109,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        //case 0: _t->on_pushButton_4_clicked(); break;
        //case 1: _t->on_pushButton_5_clicked(); break;
        case 2: _t->on_addFromFileButton_clicked(); break;
        //case 3: _t->on_displayLibraryButton_clicked(); break;
        case 4: _t->on_addManuallyButton_clicked(); break;
        //case 5: _t->on_searchButton_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        //case 7: _t->on_searchEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_searchByNameEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_searchByAuthorEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        //case 10: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_searchByIndexEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        //case 12: _t->on_label_8_linkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        //case 13: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
