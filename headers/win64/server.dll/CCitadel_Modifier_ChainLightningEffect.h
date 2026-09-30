#pragma once

class CCitadel_Modifier_ChainLightningEffect : public CCitadelModifier /*0x0*/  // sizeof 0x510, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    int32 m_nChainCount; // offset 0x140, size 0x4, align 4
    char _pad_0144[0x4]; // offset 0x144
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x148, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hUnhitEnts; // offset 0x160, size 0x18, align 8
    VectorWS m_vLastSource; // offset 0x178, size 0xC, align 4
    char _pad_0184[0x38C]; // offset 0x184
};
