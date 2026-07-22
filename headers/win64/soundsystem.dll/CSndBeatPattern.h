#pragma once

class CSndBeatPattern  // sizeof 0x98, align 0x8 (soundsystem) {MPropertyArrayElementNameKey MVDataAnonymousNode MVDataOutlinerNameExpr MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    char _pad_0008[0x4]; // offset 0x8
    SndBeatLaunchSyncType_t m_launchSyncType; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSyncPriority; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    SndBeatTimeSignature_t m_timeSignature; // offset 0x14, size 0x2, align 1 | MPropertyFriendlyName
    char _pad_0016[0x6]; // offset 0x16
    float32 m_flLength; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLooping; // offset 0x20, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0021[0x3]; // offset 0x21
    SndBeatEventType_t m_launchSyncEventType; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flSyncBeatMult; // offset 0x28, size 0x4, align 4 | MPropertySuppressExpr MPropertyGroupName MPropertyFriendlyName
    SndBeatEventType_t m_playEventType; // offset 0x2C, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName
    float32 m_flPlayBeatMult; // offset 0x30, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName
    SndBeatKeyType_t m_keyType; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName
    CUtlVector< SndBeatEventKeys_t > m_vecPatternKeys; // offset 0x38, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< SndBeatEventKeyedFloats_t > m_vecPatternFloats; // offset 0x50, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< SndBeatEventKeyedSndEvts_t > m_vecPatternSndEvts; // offset 0x68, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< SndBeatEventKeyedMidiNotes_t > m_vecPatternMidi; // offset 0x80, size 0x18, align 8 | MPropertySuppressExpr
};
