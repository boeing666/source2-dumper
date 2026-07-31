#pragma once

class CDOTA_NPC_Observer_Ward : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1B50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B3C]; // offset 0x0
    int32 m_iDuration; // offset 0x1B3C, size 0x4, align 4
    CNewParticleEffect* m_pVisionRangeFX; // offset 0x1B40, size 0x8, align 8
    int32 m_nPreviewViewer; // offset 0x1B48, size 0x4, align 4
    FowCustomTeams_t m_nFoWTeam; // offset 0x1B4C, size 0x4, align 4
};
