#pragma once

class CSoundOpvarSetEntity : public CBaseEntity /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x4B8, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x4C0, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x4C8, size 0x8, align 8
    int32 m_nOpvarType; // offset 0x4D0, size 0x4, align 4
    int32 m_nOpvarIndex; // offset 0x4D4, size 0x4, align 4
    float32 m_flOpvarValue; // offset 0x4D8, size 0x4, align 4
    char _pad_04DC[0x4]; // offset 0x4DC
    CUtlSymbolLarge m_OpvarValueString; // offset 0x4E0, size 0x8, align 8
    bool m_bSetOnSpawn; // offset 0x4E8, size 0x1, align 1
    char _pad_04E9[0xF]; // offset 0x4E9
};
