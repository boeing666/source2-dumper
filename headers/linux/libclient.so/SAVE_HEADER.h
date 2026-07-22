#pragma once

class SAVE_HEADER  // sizeof 0x60, align 0x10 (client) {MGetKV3ClassDefaults}
{
public:
    int32 m_saveId; // offset 0x0, size 0x4, align 4
    int32 m_version; // offset 0x4, size 0x4, align 4
    int32 m_nConnectionCount; // offset 0x8, size 0x4, align 4
    int32 m_nMapVersion; // offset 0xC, size 0x4, align 4
    CUtlString m_sSpawnGroupName; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x8]; // offset 0x18
    matrix3x4a_t m_vecWorldOffset; // offset 0x20, size 0x30, align 16
    float32 m_flSaveTime; // offset 0x50, size 0x4, align 4
    char _pad_0054[0xC]; // offset 0x54
};
