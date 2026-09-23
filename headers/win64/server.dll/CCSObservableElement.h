#pragma once

class CCSObservableElement : public CBaseEntity /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4C0]; // offset 0x0
    CUtlSymbolLarge m_iszObservableModelEntity; // offset 0x4C0, size 0x8, align 8
    CHandle< CBaseEntity > m_hObservableModelEntity; // offset 0x4C8, size 0x4, align 4
    CHandle< CBaseEntity > m_hObservableModelEntity2; // offset 0x4CC, size 0x4, align 4
    uint32 m_nTeamFilter; // offset 0x4D0, size 0x4, align 4
    char _pad_04D4[0x4]; // offset 0x4D4
};
