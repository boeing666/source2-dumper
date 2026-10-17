#pragma once

class C_DOTA_Unit_Miniboss : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1C3C]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x1C3C, size 0x4, align 4
    char _pad_1C40[0x4]; // offset 0x1C40
    GameTime_t m_flTransitionTimestamp; // offset 0x1C44, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x1C48, size 0x4, align 4
    char _pad_1C4C[0x4]; // offset 0x1C4C
    CUtlVector< CHandle< C_BaseEntity > > m_hAttackingHeroes; // offset 0x1C50, size 0x18, align 8
    char _pad_1C68[0x8]; // offset 0x1C68
    ParticleIndex_t nShieldFX; // offset 0x1C70, size 0x4, align 255
    int32 m_nPreviewViewer; // offset 0x1C74, size 0x4, align 4
    ParticleIndex_t m_nTPFXIndex; // offset 0x1C78, size 0x4, align 255
    char _pad_1C7C[0x4]; // offset 0x1C7C
};
