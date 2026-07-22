#pragma once

class CSoundOpvarSetEntity : public CBaseEntity /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlSymbolLarge m_iszStackName; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_iszOperatorName; // offset 0x798, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvarName; // offset 0x7A0, size 0x8, align 8
    int32 m_nOpvarType; // offset 0x7A8, size 0x4, align 4
    int32 m_nOpvarIndex; // offset 0x7AC, size 0x4, align 4
    float32 m_flOpvarValue; // offset 0x7B0, size 0x4, align 4
    char _pad_07B4[0x4]; // offset 0x7B4
    CUtlSymbolLarge m_OpvarValueString; // offset 0x7B8, size 0x8, align 8
    bool m_bSetOnSpawn; // offset 0x7C0, size 0x1, align 1
    char _pad_07C1[0xF]; // offset 0x7C1
};
