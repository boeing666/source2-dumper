#pragma once

class C_DOTA_Unit_Miniboss : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1AF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
    GameTime_t m_flTransitionTimestamp; // offset 0x1AC0, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x1AC4, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hAttackingHeroes; // offset 0x1AC8, size 0x18, align 8
    char _pad_1AE0[0x8]; // offset 0x1AE0
    ParticleIndex_t nShieldFX; // offset 0x1AE8, size 0x4, align 255
    int32 m_nPreviewViewer; // offset 0x1AEC, size 0x4, align 4
    ParticleIndex_t m_nTPFXIndex; // offset 0x1AF0, size 0x4, align 255
    char _pad_1AF4[0x4]; // offset 0x1AF4
};
