#pragma once

class CAI_ChangeHintGroup : public CBaseEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    int32 m_iSearchType; // offset 0x498, size 0x4, align 4
    char _pad_049C[0x4]; // offset 0x49C
    CUtlSymbolLarge m_strSearchName; // offset 0x4A0, size 0x8, align 8
    CUtlSymbolLarge m_strNewHintGroup; // offset 0x4A8, size 0x8, align 8
    float32 m_flRadius; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
};
