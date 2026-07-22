#pragma once

class C_DOTA_Ability_EarthSpirit_RollingBoulder : public C_DOTABaseAbility /*0x0*/  // sizeof 0x728, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 radius; // offset 0x6A8, size 0x4, align 4
    int32 speed; // offset 0x6AC, size 0x4, align 4
    int32 rock_speed; // offset 0x6B0, size 0x4, align 4
    int32 damage; // offset 0x6B4, size 0x4, align 4
    int32 damage_str; // offset 0x6B8, size 0x4, align 4
    float32 distance; // offset 0x6BC, size 0x4, align 4
    float32 rock_distance; // offset 0x6C0, size 0x4, align 4
    float32 rock_distance_multiplier; // offset 0x6C4, size 0x4, align 4
    float32 slow_duration; // offset 0x6C8, size 0x4, align 4
    int32 destroy_stone; // offset 0x6CC, size 0x4, align 4
    bool can_roll_over_allied_heroes; // offset 0x6D0, size 0x1, align 1
    char _pad_06D1[0x3]; // offset 0x6D1
    float32 allied_hero_distance; // offset 0x6D4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6D8, size 0x4, align 255
    bool m_boulderSetposBool; // offset 0x6DC, size 0x1, align 1
    char _pad_06DD[0x3]; // offset 0x6DD
    int32 m_nProjectileID; // offset 0x6E0, size 0x4, align 4
    VectorWS m_vStartingLocation; // offset 0x6E4, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x6F0, size 0xC, align 4
    Vector m_vDir; // offset 0x6FC, size 0xC, align 4
    Vector m_vVel; // offset 0x708, size 0xC, align 4
    bool m_bUsedStone; // offset 0x714, size 0x1, align 1
    bool m_bRolledOverAlliedHero; // offset 0x715, size 0x1, align 1
    char _pad_0716[0x2]; // offset 0x716
    Vector m_vRollDirection; // offset 0x718, size 0xC, align 4
    char _pad_0724[0x4]; // offset 0x724
};
