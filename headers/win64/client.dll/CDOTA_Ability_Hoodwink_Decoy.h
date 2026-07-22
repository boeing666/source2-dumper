#pragma once

class CDOTA_Ability_Hoodwink_Decoy : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > hIllusion; // offset 0x6A8, size 0x18, align 8
    float32 decoy_stun_duration; // offset 0x6C0, size 0x4, align 4
    float32 decoy_detonate_radius; // offset 0x6C4, size 0x4, align 4
    float32 projectile_speed; // offset 0x6C8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6CC, size 0x4, align 255
    char _pad_06D0[0x18]; // offset 0x6D0
};
