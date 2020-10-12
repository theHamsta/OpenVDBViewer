/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../include/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[59];
    char stringdata0[864];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "setVectorLength"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "setLOD"
QT_MOC_LITERAL(4, 35, 12), // "setPointSize"
QT_MOC_LITERAL(5, 48, 12), // "setScanSpeed"
QT_MOC_LITERAL(6, 61, 12), // "setLineWidth"
QT_MOC_LITERAL(7, 74, 19), // "startSingleAxisScan"
QT_MOC_LITERAL(8, 94, 8), // "stopScan"
QT_MOC_LITERAL(9, 103, 13), // "fillNumSlices"
QT_MOC_LITERAL(10, 117, 15), // "pauseResumeScan"
QT_MOC_LITERAL(11, 133, 7), // "useCrop"
QT_MOC_LITERAL(12, 141, 15), // "setVectorColour"
QT_MOC_LITERAL(13, 157, 10), // "toggleMesh"
QT_MOC_LITERAL(14, 168, 19), // "setColourMapApplied"
QT_MOC_LITERAL(15, 188, 25), // "toggleVectorColourEnabled"
QT_MOC_LITERAL(16, 214, 15), // "setVectorInvert"
QT_MOC_LITERAL(17, 230, 29), // "setRenderChannelFromRenderTab"
QT_MOC_LITERAL(18, 260, 16), // "setVectorChannel"
QT_MOC_LITERAL(19, 277, 13), // "setScanXWidth"
QT_MOC_LITERAL(20, 291, 14), // "setScanYHeight"
QT_MOC_LITERAL(21, 306, 13), // "setScanZDepth"
QT_MOC_LITERAL(22, 320, 7), // "setCrop"
QT_MOC_LITERAL(23, 328, 15), // "fillCropDetails"
QT_MOC_LITERAL(24, 344, 16), // "updateUsedGPUMem"
QT_MOC_LITERAL(25, 361, 8), // "openFile"
QT_MOC_LITERAL(26, 370, 8), // "filename"
QT_MOC_LITERAL(27, 379, 5), // "clear"
QT_MOC_LITERAL(28, 385, 7), // "quitApp"
QT_MOC_LITERAL(29, 393, 10), // "removeMesh"
QT_MOC_LITERAL(30, 404, 13), // "setRampPoints"
QT_MOC_LITERAL(31, 418, 13), // "setRampColour"
QT_MOC_LITERAL(32, 432, 11), // "setUserRamp"
QT_MOC_LITERAL(33, 444, 10), // "setRampMin"
QT_MOC_LITERAL(34, 455, 9), // "_updateGL"
QT_MOC_LITERAL(35, 465, 10), // "setRampMax"
QT_MOC_LITERAL(36, 476, 15), // "resetCropSlider"
QT_MOC_LITERAL(37, 492, 20), // "toggleChannelVectors"
QT_MOC_LITERAL(38, 513, 19), // "startCropSlideTimer"
QT_MOC_LITERAL(39, 533, 18), // "stopCropSlideTimer"
QT_MOC_LITERAL(40, 552, 20), // "updateCropSlideValue"
QT_MOC_LITERAL(41, 573, 12), // "setCull1Type"
QT_MOC_LITERAL(42, 586, 12), // "setCull2Type"
QT_MOC_LITERAL(43, 599, 12), // "setCull3Type"
QT_MOC_LITERAL(44, 612, 15), // "setCull1Boolean"
QT_MOC_LITERAL(45, 628, 15), // "setCull2Boolean"
QT_MOC_LITERAL(46, 644, 15), // "setCull3Boolean"
QT_MOC_LITERAL(47, 660, 21), // "enableCull1RangeBoxes"
QT_MOC_LITERAL(48, 682, 8), // "_enabled"
QT_MOC_LITERAL(49, 691, 21), // "enableCull2RangeBoxes"
QT_MOC_LITERAL(50, 713, 21), // "enableCull3RangeBoxes"
QT_MOC_LITERAL(51, 735, 17), // "setCullingEnabled"
QT_MOC_LITERAL(52, 753, 14), // "setCull1Values"
QT_MOC_LITERAL(53, 768, 14), // "setCull2Values"
QT_MOC_LITERAL(54, 783, 14), // "setCull3Values"
QT_MOC_LITERAL(55, 798, 16), // "setCullToChannel"
QT_MOC_LITERAL(56, 815, 22), // "setCullToChannelNumber"
QT_MOC_LITERAL(57, 838, 15), // "showInformation"
QT_MOC_LITERAL(58, 854, 9) // "openAbout"

    },
    "MainWindow\0setVectorLength\0\0setLOD\0"
    "setPointSize\0setScanSpeed\0setLineWidth\0"
    "startSingleAxisScan\0stopScan\0fillNumSlices\0"
    "pauseResumeScan\0useCrop\0setVectorColour\0"
    "toggleMesh\0setColourMapApplied\0"
    "toggleVectorColourEnabled\0setVectorInvert\0"
    "setRenderChannelFromRenderTab\0"
    "setVectorChannel\0setScanXWidth\0"
    "setScanYHeight\0setScanZDepth\0setCrop\0"
    "fillCropDetails\0updateUsedGPUMem\0"
    "openFile\0filename\0clear\0quitApp\0"
    "removeMesh\0setRampPoints\0setRampColour\0"
    "setUserRamp\0setRampMin\0_updateGL\0"
    "setRampMax\0resetCropSlider\0"
    "toggleChannelVectors\0startCropSlideTimer\0"
    "stopCropSlideTimer\0updateCropSlideValue\0"
    "setCull1Type\0setCull2Type\0setCull3Type\0"
    "setCull1Boolean\0setCull2Boolean\0"
    "setCull3Boolean\0enableCull1RangeBoxes\0"
    "_enabled\0enableCull2RangeBoxes\0"
    "enableCull3RangeBoxes\0setCullingEnabled\0"
    "setCull1Values\0setCull2Values\0"
    "setCull3Values\0setCullToChannel\0"
    "setCullToChannelNumber\0showInformation\0"
    "openAbout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  299,    2, 0x0a /* Public */,
       3,    0,  300,    2, 0x0a /* Public */,
       4,    0,  301,    2, 0x0a /* Public */,
       5,    0,  302,    2, 0x0a /* Public */,
       6,    0,  303,    2, 0x0a /* Public */,
       7,    0,  304,    2, 0x0a /* Public */,
       8,    0,  305,    2, 0x0a /* Public */,
       9,    0,  306,    2, 0x0a /* Public */,
      10,    0,  307,    2, 0x0a /* Public */,
      11,    0,  308,    2, 0x0a /* Public */,
      12,    0,  309,    2, 0x0a /* Public */,
      13,    0,  310,    2, 0x0a /* Public */,
      14,    0,  311,    2, 0x0a /* Public */,
      15,    0,  312,    2, 0x0a /* Public */,
      16,    0,  313,    2, 0x0a /* Public */,
      17,    0,  314,    2, 0x0a /* Public */,
      18,    0,  315,    2, 0x0a /* Public */,
      19,    0,  316,    2, 0x0a /* Public */,
      20,    0,  317,    2, 0x0a /* Public */,
      21,    0,  318,    2, 0x0a /* Public */,
      22,    0,  319,    2, 0x0a /* Public */,
      23,    0,  320,    2, 0x0a /* Public */,
      24,    0,  321,    2, 0x0a /* Public */,
      25,    0,  322,    2, 0x0a /* Public */,
      25,    1,  323,    2, 0x0a /* Public */,
      27,    0,  326,    2, 0x0a /* Public */,
      28,    0,  327,    2, 0x0a /* Public */,
      29,    0,  328,    2, 0x0a /* Public */,
      30,    0,  329,    2, 0x0a /* Public */,
      31,    0,  330,    2, 0x0a /* Public */,
      32,    0,  331,    2, 0x0a /* Public */,
      33,    1,  332,    2, 0x0a /* Public */,
      33,    0,  335,    2, 0x2a /* Public | MethodCloned */,
      35,    1,  336,    2, 0x0a /* Public */,
      35,    0,  339,    2, 0x2a /* Public | MethodCloned */,
      36,    0,  340,    2, 0x08 /* Private */,
      37,    0,  341,    2, 0x08 /* Private */,
      38,    0,  342,    2, 0x08 /* Private */,
      39,    0,  343,    2, 0x08 /* Private */,
      40,    0,  344,    2, 0x08 /* Private */,
      41,    0,  345,    2, 0x08 /* Private */,
      42,    0,  346,    2, 0x08 /* Private */,
      43,    0,  347,    2, 0x08 /* Private */,
      44,    0,  348,    2, 0x08 /* Private */,
      45,    0,  349,    2, 0x08 /* Private */,
      46,    0,  350,    2, 0x08 /* Private */,
      47,    1,  351,    2, 0x08 /* Private */,
      49,    1,  354,    2, 0x08 /* Private */,
      50,    1,  357,    2, 0x08 /* Private */,
      51,    0,  360,    2, 0x08 /* Private */,
      52,    0,  361,    2, 0x08 /* Private */,
      53,    0,  362,    2, 0x08 /* Private */,
      54,    0,  363,    2, 0x08 /* Private */,
      55,    0,  364,    2, 0x08 /* Private */,
      56,    0,  365,    2, 0x08 /* Private */,
      57,    0,  366,    2, 0x08 /* Private */,
      58,    0,  367,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setVectorLength(); break;
        case 1: _t->setLOD(); break;
        case 2: _t->setPointSize(); break;
        case 3: _t->setScanSpeed(); break;
        case 4: _t->setLineWidth(); break;
        case 5: _t->startSingleAxisScan(); break;
        case 6: _t->stopScan(); break;
        case 7: _t->fillNumSlices(); break;
        case 8: _t->pauseResumeScan(); break;
        case 9: _t->useCrop(); break;
        case 10: _t->setVectorColour(); break;
        case 11: _t->toggleMesh(); break;
        case 12: _t->setColourMapApplied(); break;
        case 13: _t->toggleVectorColourEnabled(); break;
        case 14: _t->setVectorInvert(); break;
        case 15: _t->setRenderChannelFromRenderTab(); break;
        case 16: _t->setVectorChannel(); break;
        case 17: _t->setScanXWidth(); break;
        case 18: _t->setScanYHeight(); break;
        case 19: _t->setScanZDepth(); break;
        case 20: _t->setCrop(); break;
        case 21: _t->fillCropDetails(); break;
        case 22: _t->updateUsedGPUMem(); break;
        case 23: _t->openFile(); break;
        case 24: _t->openFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->clear(); break;
        case 26: _t->quitApp(); break;
        case 27: _t->removeMesh(); break;
        case 28: _t->setRampPoints(); break;
        case 29: _t->setRampColour(); break;
        case 30: _t->setUserRamp(); break;
        case 31: _t->setRampMin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->setRampMin(); break;
        case 33: _t->setRampMax((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setRampMax(); break;
        case 35: _t->resetCropSlider(); break;
        case 36: _t->toggleChannelVectors(); break;
        case 37: _t->startCropSlideTimer(); break;
        case 38: _t->stopCropSlideTimer(); break;
        case 39: _t->updateCropSlideValue(); break;
        case 40: _t->setCull1Type(); break;
        case 41: _t->setCull2Type(); break;
        case 42: _t->setCull3Type(); break;
        case 43: _t->setCull1Boolean(); break;
        case 44: _t->setCull2Boolean(); break;
        case 45: _t->setCull3Boolean(); break;
        case 46: _t->enableCull1RangeBoxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->enableCull2RangeBoxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->enableCull3RangeBoxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->setCullingEnabled(); break;
        case 50: _t->setCull1Values(); break;
        case 51: _t->setCull2Values(); break;
        case 52: _t->setCull3Values(); break;
        case 53: _t->setCullToChannel(); break;
        case 54: _t->setCullToChannelNumber(); break;
        case 55: _t->showInformation(); break;
        case 56: _t->openAbout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
