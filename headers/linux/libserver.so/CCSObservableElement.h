#pragma once

class CCSObservableElement : public CBaseEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    CUtlSymbolLarge m_iszObservableModelEntity; // offset 0x7A0, size 0x8, align 8
    CHandle< CBaseEntity > m_hObservableModelEntity; // offset 0x7A8, size 0x4, align 4
    CHandle< CBaseEntity > m_hObservableModelEntity2; // offset 0x7AC, size 0x4, align 4
    uint32 m_nTeamFilter; // offset 0x7B0, size 0x4, align 4
    char _pad_07B4[0x4]; // offset 0x7B4
};
