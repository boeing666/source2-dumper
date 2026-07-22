#pragma once

class CAI_ChangeHintGroup : public CBaseEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    int32 m_iSearchType; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CUtlSymbolLarge m_strSearchName; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_strNewHintGroup; // offset 0x798, size 0x8, align 8
    float32 m_flRadius; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
