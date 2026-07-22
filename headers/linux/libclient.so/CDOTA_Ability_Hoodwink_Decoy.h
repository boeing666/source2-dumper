#pragma once

class CDOTA_Ability_Hoodwink_Decoy : public C_DOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > hIllusion; // offset 0x828, size 0x18, align 8
    float32 decoy_stun_duration; // offset 0x840, size 0x4, align 4
    float32 decoy_detonate_radius; // offset 0x844, size 0x4, align 4
    float32 projectile_speed; // offset 0x848, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x84C, size 0x4, align 255
    char _pad_0850[0x18]; // offset 0x850
};
