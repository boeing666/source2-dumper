#pragma once

class C_DOTA_Unit_Miniboss : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1B80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B3C]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x1B3C, size 0x4, align 4
    char _pad_1B40[0x4]; // offset 0x1B40
    GameTime_t m_flTransitionTimestamp; // offset 0x1B44, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x1B48, size 0x4, align 4
    char _pad_1B4C[0x4]; // offset 0x1B4C
    CUtlVector< CHandle< C_BaseEntity > > m_hAttackingHeroes; // offset 0x1B50, size 0x18, align 8
    char _pad_1B68[0x8]; // offset 0x1B68
    ParticleIndex_t nShieldFX; // offset 0x1B70, size 0x4, align 255
    int32 m_nPreviewViewer; // offset 0x1B74, size 0x4, align 4
    ParticleIndex_t m_nTPFXIndex; // offset 0x1B78, size 0x4, align 255
    char _pad_1B7C[0x4]; // offset 0x1B7C
};
