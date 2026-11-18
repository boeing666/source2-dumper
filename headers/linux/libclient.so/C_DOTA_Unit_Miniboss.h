#pragma once

class C_DOTA_Unit_Miniboss : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1CCC]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x1CCC, size 0x4, align 4
    char _pad_1CD0[0x4]; // offset 0x1CD0
    GameTime_t m_flTransitionTimestamp; // offset 0x1CD4, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x1CD8, size 0x4, align 4
    char _pad_1CDC[0x4]; // offset 0x1CDC
    CUtlVector< CHandle< C_BaseEntity > > m_hAttackingHeroes; // offset 0x1CE0, size 0x18, align 8
    char _pad_1CF8[0x8]; // offset 0x1CF8
    ParticleIndex_t nShieldFX; // offset 0x1D00, size 0x4, align 255
    int32 m_nPreviewViewer; // offset 0x1D04, size 0x4, align 4
    ParticleIndex_t m_nTPFXIndex; // offset 0x1D08, size 0x4, align 255
    char _pad_1D0C[0x4]; // offset 0x1D0C
};
