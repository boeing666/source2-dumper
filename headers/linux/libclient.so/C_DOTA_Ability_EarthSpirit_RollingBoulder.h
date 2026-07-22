#pragma once

class C_DOTA_Ability_EarthSpirit_RollingBoulder : public C_DOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 radius; // offset 0x824, size 0x4, align 4
    int32 speed; // offset 0x828, size 0x4, align 4
    int32 rock_speed; // offset 0x82C, size 0x4, align 4
    int32 damage; // offset 0x830, size 0x4, align 4
    int32 damage_str; // offset 0x834, size 0x4, align 4
    float32 distance; // offset 0x838, size 0x4, align 4
    float32 rock_distance; // offset 0x83C, size 0x4, align 4
    float32 rock_distance_multiplier; // offset 0x840, size 0x4, align 4
    float32 slow_duration; // offset 0x844, size 0x4, align 4
    int32 destroy_stone; // offset 0x848, size 0x4, align 4
    bool can_roll_over_allied_heroes; // offset 0x84C, size 0x1, align 1
    char _pad_084D[0x3]; // offset 0x84D
    float32 allied_hero_distance; // offset 0x850, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x854, size 0x4, align 255
    bool m_boulderSetposBool; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x3]; // offset 0x859
    int32 m_nProjectileID; // offset 0x85C, size 0x4, align 4
    VectorWS m_vStartingLocation; // offset 0x860, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x86C, size 0xC, align 4
    Vector m_vDir; // offset 0x878, size 0xC, align 4
    Vector m_vVel; // offset 0x884, size 0xC, align 4
    bool m_bUsedStone; // offset 0x890, size 0x1, align 1
    bool m_bRolledOverAlliedHero; // offset 0x891, size 0x1, align 1
    char _pad_0892[0x2]; // offset 0x892
    Vector m_vRollDirection; // offset 0x894, size 0xC, align 4
};
