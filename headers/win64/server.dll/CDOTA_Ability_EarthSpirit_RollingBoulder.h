#pragma once

class CDOTA_Ability_EarthSpirit_RollingBoulder : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x610, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    int32 radius; // offset 0x590, size 0x4, align 4
    int32 speed; // offset 0x594, size 0x4, align 4
    int32 rock_speed; // offset 0x598, size 0x4, align 4
    int32 damage; // offset 0x59C, size 0x4, align 4
    int32 damage_str; // offset 0x5A0, size 0x4, align 4
    float32 distance; // offset 0x5A4, size 0x4, align 4
    float32 rock_distance; // offset 0x5A8, size 0x4, align 4
    float32 rock_distance_multiplier; // offset 0x5AC, size 0x4, align 4
    float32 slow_duration; // offset 0x5B0, size 0x4, align 4
    int32 destroy_stone; // offset 0x5B4, size 0x4, align 4
    bool can_roll_over_allied_heroes; // offset 0x5B8, size 0x1, align 1
    char _pad_05B9[0x3]; // offset 0x5B9
    float32 allied_hero_distance; // offset 0x5BC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x5C0, size 0x4, align 255
    bool m_boulderSetposBool; // offset 0x5C4, size 0x1, align 1
    char _pad_05C5[0x3]; // offset 0x5C5
    int32 m_nProjectileID; // offset 0x5C8, size 0x4, align 4
    VectorWS m_vStartingLocation; // offset 0x5CC, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x5D8, size 0xC, align 4
    Vector m_vDir; // offset 0x5E4, size 0xC, align 4
    Vector m_vVel; // offset 0x5F0, size 0xC, align 4
    bool m_bUsedStone; // offset 0x5FC, size 0x1, align 1
    bool m_bRolledOverAlliedHero; // offset 0x5FD, size 0x1, align 1
    char _pad_05FE[0x2]; // offset 0x5FE
    Vector m_vRollDirection; // offset 0x600, size 0xC, align 4
    char _pad_060C[0x4]; // offset 0x60C
};
