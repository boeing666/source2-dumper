#pragma once

class C_DOTA_Unit_Miniboss : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x19B0, size 0x4, align 4
    char _pad_19B4[0x4]; // offset 0x19B4
    GameTime_t m_flTransitionTimestamp; // offset 0x19B8, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x19BC, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hAttackingHeroes; // offset 0x19C0, size 0x18, align 8
    char _pad_19D8[0x8]; // offset 0x19D8
    ParticleIndex_t nShieldFX; // offset 0x19E0, size 0x4, align 255
    int32 m_nPreviewViewer; // offset 0x19E4, size 0x4, align 4
    ParticleIndex_t m_nTPFXIndex; // offset 0x19E8, size 0x4, align 255
    char _pad_19EC[0x4]; // offset 0x19EC
};
