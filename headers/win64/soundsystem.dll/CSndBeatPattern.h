#pragma once

class CSndBeatPattern  // sizeof 0xB8, align 0x8 (soundsystem) {MPropertyArrayElementNameKey MVDataAnonymousNode MVDataOutlinerNameExpr MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    char _pad_0008[0x4]; // offset 0x8
    float32 m_flSyncPriority; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    SndBeatSyncStartType_t m_syncStartType; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    SndBeatSyncType_t m_syncType; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName
    SndBeatTimeSignature_t m_timeSignature; // offset 0x18, size 0x2, align 1 | MPropertyFriendlyName
    char _pad_001A[0x6]; // offset 0x1A
    float32 m_flLength; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLooping; // offset 0x24, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0025[0x3]; // offset 0x25
    SndBeatEventType_t m_playEventType; // offset 0x28, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flPlayBeatMult; // offset 0x2C, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    SndBeatKeyType_t m_playKeyType; // offset 0x30, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    char _pad_0034[0x4]; // offset 0x34
    CUtlVector< SndBeatEventKeys_t > m_vecPatternKeys; // offset 0x38, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< SndBeatEventKeyedFloats_t > m_vecPatternFloats; // offset 0x50, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< SndBeatEventKeyedSndEvts_t > m_vecPatternSndEvts; // offset 0x68, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< SndBeatEventKeyedMidiNotes_t > m_vecPatternMidi; // offset 0x80, size 0x18, align 8 | MPropertySuppressExpr
    SndBeatEventType_t m_syncEventType; // offset 0x98, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flSyncBeatMult; // offset 0x9C, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    CUtlVector< SndBeatEventKeys_t > m_vecSyncPatternKeys; // offset 0xA0, size 0x18, align 8 | MPropertySuppressExpr
};
