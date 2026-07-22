#pragma once

class C_DOTA_NPC_Lantern : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    CUtlSymbolLarge m_szInteractAbilityName; // offset 0x1A20, size 0x8, align 8
    CNewParticleEffect* m_pVisionRangeFX; // offset 0x1A28, size 0x8, align 8
    int32 m_nPreviewViewer; // offset 0x1A30, size 0x4, align 4
    ParticleIndex_t m_iFxIndex; // offset 0x1A34, size 0x4, align 255
    int32 m_nCurrentOwningTeam; // offset 0x1A38, size 0x4, align 4
    int32 m_nCurrentActivity; // offset 0x1A3C, size 0x4, align 4
    bool m_bCanBeCaptured; // offset 0x1A40, size 0x1, align 1
    char _pad_1A41[0x7]; // offset 0x1A41
};
