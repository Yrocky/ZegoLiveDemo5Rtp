/****************************************************************************
** Meta object code from reading C++ file 'ZegoBaseDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Base/ZegoBaseDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZegoBaseDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZegoBaseDialog_t {
    QByteArrayData data[74];
    char stringdata0[996];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZegoBaseDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZegoBaseDialog_t qt_meta_stringdata_ZegoBaseDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ZegoBaseDialog"
QT_MOC_LITERAL(1, 15, 20), // "sigSaveVideoSettings"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "SettingsPtr"
QT_MOC_LITERAL(4, 49, 8), // "settings"
QT_MOC_LITERAL(5, 58, 20), // "sigShowSnapShotImage"
QT_MOC_LITERAL(6, 79, 7), // "QImage*"
QT_MOC_LITERAL(7, 87, 9), // "imageData"
QT_MOC_LITERAL(8, 97, 12), // "OnUserUpdate"
QT_MOC_LITERAL(9, 110, 16), // "QVector<QString>"
QT_MOC_LITERAL(10, 127, 7), // "userIDs"
QT_MOC_LITERAL(11, 135, 9), // "userNames"
QT_MOC_LITERAL(12, 145, 12), // "QVector<int>"
QT_MOC_LITERAL(13, 158, 9), // "userFlags"
QT_MOC_LITERAL(14, 168, 9), // "userRoles"
QT_MOC_LITERAL(15, 178, 9), // "userCount"
QT_MOC_LITERAL(16, 188, 28), // "LIVEROOM::ZegoUserUpdateType"
QT_MOC_LITERAL(17, 217, 4), // "type"
QT_MOC_LITERAL(18, 222, 12), // "OnDisconnect"
QT_MOC_LITERAL(19, 235, 9), // "errorCode"
QT_MOC_LITERAL(20, 245, 6), // "roomId"
QT_MOC_LITERAL(21, 252, 9), // "OnKickOut"
QT_MOC_LITERAL(22, 262, 6), // "reason"
QT_MOC_LITERAL(23, 269, 19), // "OnPlayQualityUpdate"
QT_MOC_LITERAL(24, 289, 8), // "streamId"
QT_MOC_LITERAL(25, 298, 7), // "quality"
QT_MOC_LITERAL(26, 306, 8), // "videoFPS"
QT_MOC_LITERAL(27, 315, 8), // "videoKBS"
QT_MOC_LITERAL(28, 324, 22), // "OnPublishQualityUpdate"
QT_MOC_LITERAL(29, 347, 12), // "OnAVAuxInput"
QT_MOC_LITERAL(30, 360, 14), // "unsigned char*"
QT_MOC_LITERAL(31, 375, 5), // "pData"
QT_MOC_LITERAL(32, 381, 4), // "int*"
QT_MOC_LITERAL(33, 386, 8), // "pDataLen"
QT_MOC_LITERAL(34, 395, 13), // "pDataLenValue"
QT_MOC_LITERAL(35, 409, 11), // "pSampleRate"
QT_MOC_LITERAL(36, 421, 12), // "pNumChannels"
QT_MOC_LITERAL(37, 434, 17), // "OnSendRoomMessage"
QT_MOC_LITERAL(38, 452, 6), // "roomID"
QT_MOC_LITERAL(39, 459, 7), // "sendSeq"
QT_MOC_LITERAL(40, 467, 9), // "messageId"
QT_MOC_LITERAL(41, 477, 17), // "OnRecvRoomMessage"
QT_MOC_LITERAL(42, 495, 19), // "QVector<RoomMsgPtr>"
QT_MOC_LITERAL(43, 515, 12), // "vRoomMsgList"
QT_MOC_LITERAL(44, 528, 20), // "OnAudioDeviceChanged"
QT_MOC_LITERAL(45, 549, 19), // "AV::AudioDeviceType"
QT_MOC_LITERAL(46, 569, 10), // "deviceType"
QT_MOC_LITERAL(47, 580, 11), // "strDeviceId"
QT_MOC_LITERAL(48, 592, 13), // "strDeviceName"
QT_MOC_LITERAL(49, 606, 15), // "AV::DeviceState"
QT_MOC_LITERAL(50, 622, 5), // "state"
QT_MOC_LITERAL(51, 628, 20), // "OnVideoDeviceChanged"
QT_MOC_LITERAL(52, 649, 17), // "OnPreviewSnapshot"
QT_MOC_LITERAL(53, 667, 6), // "pImage"
QT_MOC_LITERAL(54, 674, 10), // "OnSnapshot"
QT_MOC_LITERAL(55, 685, 8), // "streamID"
QT_MOC_LITERAL(56, 694, 18), // "OnClickTitleButton"
QT_MOC_LITERAL(57, 713, 7), // "OnClose"
QT_MOC_LITERAL(58, 721, 19), // "OnButtonSendMessage"
QT_MOC_LITERAL(59, 741, 20), // "OnButtonSoundCapture"
QT_MOC_LITERAL(60, 762, 18), // "OnButtonMircoPhone"
QT_MOC_LITERAL(61, 781, 13), // "OnButtonSound"
QT_MOC_LITERAL(62, 795, 12), // "OnProgChange"
QT_MOC_LITERAL(63, 808, 11), // "OnShareLink"
QT_MOC_LITERAL(64, 820, 11), // "OnButtonAux"
QT_MOC_LITERAL(65, 832, 17), // "OnSnapshotPreview"
QT_MOC_LITERAL(66, 850, 22), // "OnSnapshotWithStreamID"
QT_MOC_LITERAL(67, 873, 15), // "OnUseDefaultAux"
QT_MOC_LITERAL(68, 889, 19), // "OnSwitchAudioDevice"
QT_MOC_LITERAL(69, 909, 2), // "id"
QT_MOC_LITERAL(70, 912, 19), // "OnSwitchVideoDevice"
QT_MOC_LITERAL(71, 932, 20), // "OnSwitchVideoDevice2"
QT_MOC_LITERAL(72, 953, 22), // "OnButtonShowFullScreen"
QT_MOC_LITERAL(73, 976, 19) // "OnShowSnapShotImage"

    },
    "ZegoBaseDialog\0sigSaveVideoSettings\0"
    "\0SettingsPtr\0settings\0sigShowSnapShotImage\0"
    "QImage*\0imageData\0OnUserUpdate\0"
    "QVector<QString>\0userIDs\0userNames\0"
    "QVector<int>\0userFlags\0userRoles\0"
    "userCount\0LIVEROOM::ZegoUserUpdateType\0"
    "type\0OnDisconnect\0errorCode\0roomId\0"
    "OnKickOut\0reason\0OnPlayQualityUpdate\0"
    "streamId\0quality\0videoFPS\0videoKBS\0"
    "OnPublishQualityUpdate\0OnAVAuxInput\0"
    "unsigned char*\0pData\0int*\0pDataLen\0"
    "pDataLenValue\0pSampleRate\0pNumChannels\0"
    "OnSendRoomMessage\0roomID\0sendSeq\0"
    "messageId\0OnRecvRoomMessage\0"
    "QVector<RoomMsgPtr>\0vRoomMsgList\0"
    "OnAudioDeviceChanged\0AV::AudioDeviceType\0"
    "deviceType\0strDeviceId\0strDeviceName\0"
    "AV::DeviceState\0state\0OnVideoDeviceChanged\0"
    "OnPreviewSnapshot\0pImage\0OnSnapshot\0"
    "streamID\0OnClickTitleButton\0OnClose\0"
    "OnButtonSendMessage\0OnButtonSoundCapture\0"
    "OnButtonMircoPhone\0OnButtonSound\0"
    "OnProgChange\0OnShareLink\0OnButtonAux\0"
    "OnSnapshotPreview\0OnSnapshotWithStreamID\0"
    "OnUseDefaultAux\0OnSwitchAudioDevice\0"
    "id\0OnSwitchVideoDevice\0OnSwitchVideoDevice2\0"
    "OnButtonShowFullScreen\0OnShowSnapShotImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZegoBaseDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,
       5,    1,  172,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    6,  175,    2, 0x09 /* Protected */,
      18,    2,  188,    2, 0x09 /* Protected */,
      21,    2,  193,    2, 0x09 /* Protected */,
      23,    4,  198,    2, 0x09 /* Protected */,
      28,    4,  207,    2, 0x09 /* Protected */,
      29,    5,  216,    2, 0x09 /* Protected */,
      37,    4,  227,    2, 0x09 /* Protected */,
      41,    2,  236,    2, 0x09 /* Protected */,
      44,    4,  241,    2, 0x09 /* Protected */,
      51,    3,  250,    2, 0x09 /* Protected */,
      52,    1,  257,    2, 0x09 /* Protected */,
      54,    2,  260,    2, 0x09 /* Protected */,
      56,    0,  265,    2, 0x0a /* Public */,
      57,    0,  266,    2, 0x0a /* Public */,
      58,    0,  267,    2, 0x0a /* Public */,
      59,    0,  268,    2, 0x0a /* Public */,
      60,    0,  269,    2, 0x0a /* Public */,
      61,    0,  270,    2, 0x0a /* Public */,
      62,    0,  271,    2, 0x0a /* Public */,
      63,    0,  272,    2, 0x0a /* Public */,
      64,    0,  273,    2, 0x0a /* Public */,
      65,    0,  274,    2, 0x0a /* Public */,
      66,    1,  275,    2, 0x0a /* Public */,
      67,    1,  278,    2, 0x0a /* Public */,
      68,    1,  281,    2, 0x0a /* Public */,
      70,    1,  284,    2, 0x0a /* Public */,
      71,    1,  287,    2, 0x0a /* Public */,
      72,    0,  290,    2, 0x0a /* Public */,
      73,    1,  291,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 12, 0x80000000 | 12, QMetaType::UInt, 0x80000000 | 16,   10,   11,   13,   14,   15,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   22,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double,   24,   25,   26,   27,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 32, QMetaType::Int, 0x80000000 | 32, 0x80000000 | 32,   31,   33,   34,   35,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::ULongLong,   19,   38,   39,   40,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 42,   20,   43,
    QMetaType::Void, 0x80000000 | 45, QMetaType::QString, QMetaType::QString, 0x80000000 | 49,   46,   47,   48,   50,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 49,   47,   48,   50,
    QMetaType::Void, QMetaType::VoidStar,   53,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::QString,   53,   55,
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
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ZegoBaseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZegoBaseDialog *_t = static_cast<ZegoBaseDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigSaveVideoSettings((*reinterpret_cast< SettingsPtr(*)>(_a[1]))); break;
        case 1: _t->sigShowSnapShotImage((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 2: _t->OnUserUpdate((*reinterpret_cast< QVector<QString>(*)>(_a[1])),(*reinterpret_cast< QVector<QString>(*)>(_a[2])),(*reinterpret_cast< QVector<int>(*)>(_a[3])),(*reinterpret_cast< QVector<int>(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< LIVEROOM::ZegoUserUpdateType(*)>(_a[6]))); break;
        case 3: _t->OnDisconnect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->OnKickOut((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->OnPlayQualityUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 6: _t->OnPublishQualityUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 7: _t->OnAVAuxInput((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 8: _t->OnSendRoomMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< unsigned long long(*)>(_a[4]))); break;
        case 9: _t->OnRecvRoomMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QVector<RoomMsgPtr>(*)>(_a[2]))); break;
        case 10: _t->OnAudioDeviceChanged((*reinterpret_cast< AV::AudioDeviceType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< AV::DeviceState(*)>(_a[4]))); break;
        case 11: _t->OnVideoDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< AV::DeviceState(*)>(_a[3]))); break;
        case 12: _t->OnPreviewSnapshot((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 13: _t->OnSnapshot((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->OnClickTitleButton(); break;
        case 15: _t->OnClose(); break;
        case 16: _t->OnButtonSendMessage(); break;
        case 17: _t->OnButtonSoundCapture(); break;
        case 18: _t->OnButtonMircoPhone(); break;
        case 19: _t->OnButtonSound(); break;
        case 20: _t->OnProgChange(); break;
        case 21: _t->OnShareLink(); break;
        case 22: _t->OnButtonAux(); break;
        case 23: _t->OnSnapshotPreview(); break;
        case 24: _t->OnSnapshotWithStreamID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->OnUseDefaultAux((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->OnSwitchAudioDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->OnSwitchVideoDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->OnSwitchVideoDevice2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->OnButtonShowFullScreen(); break;
        case 30: _t->OnShowSnapShotImage((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            case 3:
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZegoBaseDialog::*_t)(SettingsPtr );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZegoBaseDialog::sigSaveVideoSettings)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ZegoBaseDialog::*_t)(QImage * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZegoBaseDialog::sigShowSnapShotImage)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ZegoBaseDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ZegoBaseDialog.data,
      qt_meta_data_ZegoBaseDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ZegoBaseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZegoBaseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ZegoBaseDialog.stringdata0))
        return static_cast<void*>(const_cast< ZegoBaseDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ZegoBaseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void ZegoBaseDialog::sigSaveVideoSettings(SettingsPtr _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZegoBaseDialog::sigShowSnapShotImage(QImage * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE