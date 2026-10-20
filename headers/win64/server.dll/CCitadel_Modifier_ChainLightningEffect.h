#pragma once

class CCitadel_Modifier_ChainLightningEffect : public CCitadelModifier /*0x0*/  // sizeof 0x520, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    int32 m_nChainCount; // offset 0x150, size 0x4, align 4
    char _pad_0154[0x4]; // offset 0x154
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x158, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hUnhitEnts; // offset 0x170, size 0x18, align 8
    VectorWS m_vLastSource; // offset 0x188, size 0xC, align 4
    char _pad_0194[0x38C]; // offset 0x194
};
