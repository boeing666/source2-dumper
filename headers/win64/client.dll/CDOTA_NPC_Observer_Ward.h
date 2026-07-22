#pragma once

class CDOTA_NPC_Observer_Ward : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    int32 m_iDuration; // offset 0x19B0, size 0x4, align 4
    char _pad_19B4[0x4]; // offset 0x19B4
    CNewParticleEffect* m_pVisionRangeFX; // offset 0x19B8, size 0x8, align 8
    int32 m_nPreviewViewer; // offset 0x19C0, size 0x4, align 4
    FowCustomTeams_t m_nFoWTeam; // offset 0x19C4, size 0x4, align 4
};
