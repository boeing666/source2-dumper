#pragma once

class CCitadel_Modifier_ChainLightningEffect : public CCitadelModifier /*0x0*/  // sizeof 0x3B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    int32 m_nChainCount; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x4]; // offset 0xD4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0xD8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hUnhitEnts; // offset 0xF0, size 0x18, align 8
    Vector m_vLastSource; // offset 0x108, size 0xC, align 4
    char _pad_0114[0x29C]; // offset 0x114
};
