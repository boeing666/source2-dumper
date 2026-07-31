#pragma once

class C_DOTA_NPC_Lantern : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1BD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BB0]; // offset 0x0
    CUtlSymbolLarge m_szInteractAbilityName; // offset 0x1BB0, size 0x8, align 8
    CNewParticleEffect* m_pVisionRangeFX; // offset 0x1BB8, size 0x8, align 8
    int32 m_nPreviewViewer; // offset 0x1BC0, size 0x4, align 4
    ParticleIndex_t m_iFxIndex; // offset 0x1BC4, size 0x4, align 255
    int32 m_nCurrentOwningTeam; // offset 0x1BC8, size 0x4, align 4
    int32 m_nCurrentActivity; // offset 0x1BCC, size 0x4, align 4
    bool m_bCanBeCaptured; // offset 0x1BD0, size 0x1, align 1
    char _pad_1BD1[0x7]; // offset 0x1BD1
};
