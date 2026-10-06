#pragma once

class CCitadel_Modifier_ChainLightningEffect : public CCitadelModifier /*0x0*/  // sizeof 0x518, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    int32 m_nChainCount; // offset 0x148, size 0x4, align 4
    char _pad_014C[0x4]; // offset 0x14C
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x150, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hUnhitEnts; // offset 0x168, size 0x18, align 8
    VectorWS m_vLastSource; // offset 0x180, size 0xC, align 4
    char _pad_018C[0x38C]; // offset 0x18C
};
