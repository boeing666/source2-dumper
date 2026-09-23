#pragma once

class CCSObservableElement : public C_BaseEntity /*0x0*/  // sizeof 0x630, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x618]; // offset 0x0
    CUtlSymbolLarge m_iszObservableModelEntity; // offset 0x618, size 0x8, align 8
    CHandle< C_BaseEntity > m_hObservableModelEntity; // offset 0x620, size 0x4, align 4
    CHandle< C_BaseEntity > m_hObservableModelEntity2; // offset 0x624, size 0x4, align 4
    uint32 m_nTeamFilter; // offset 0x628, size 0x4, align 4
    char _pad_062C[0x4]; // offset 0x62C
};
