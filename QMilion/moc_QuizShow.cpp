/****************************************************************************
** Meta object code from reading C++ file 'QuizShow.h'
**
** Created: Mon Aug 9 20:15:34 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QuizShow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QuizShow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QuizShow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      26,    9,    9,    9, 0x0a,
      42,    9,    9,    9, 0x0a,
      58,    9,    9,    9, 0x0a,
      74,    9,    9,    9, 0x0a,
      89,    9,    9,    9, 0x0a,
     109,    9,    9,    9, 0x0a,
     124,    9,    9,    9, 0x0a,
     138,    9,    9,    9, 0x0a,
     159,    9,    9,    9, 0x0a,
     171,    9,    9,    9, 0x0a,
     186,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QuizShow[] = {
    "QuizShow\0\0selectAnswerA()\0selectAnswerB()\0"
    "selectAnswerC()\0selectAnswerD()\0"
    "resignAction()\0fifty_fiftyAction()\0"
    "publicAction()\0phoneAction()\0"
    "showCongratulation()\0showPrice()\0"
    "showQuestion()\0showFullWins()\0"
};

const QMetaObject QuizShow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QuizShow,
      qt_meta_data_QuizShow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuizShow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuizShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuizShow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuizShow))
        return static_cast<void*>(const_cast< QuizShow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QuizShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectAnswerA(); break;
        case 1: selectAnswerB(); break;
        case 2: selectAnswerC(); break;
        case 3: selectAnswerD(); break;
        case 4: resignAction(); break;
        case 5: fifty_fiftyAction(); break;
        case 6: publicAction(); break;
        case 7: phoneAction(); break;
        case 8: showCongratulation(); break;
        case 9: showPrice(); break;
        case 10: showQuestion(); break;
        case 11: showFullWins(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
