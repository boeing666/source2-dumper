#pragma once

class CAI_ChangeHintGroup : public CBaseEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    int32 m_iSearchType; // offset 0x4A8, size 0x4, align 4
    char _pad_04AC[0x4]; // offset 0x4AC
    CUtlSymbolLarge m_strSearchName; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_strNewHintGroup; // offset 0x4B8, size 0x8, align 8
    float32 m_flRadius; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
};
