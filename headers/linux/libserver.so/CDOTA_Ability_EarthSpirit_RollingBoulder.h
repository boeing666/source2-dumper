#pragma once

class CDOTA_Ability_EarthSpirit_RollingBoulder : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    int32 radius; // offset 0x86C, size 0x4, align 4
    int32 speed; // offset 0x870, size 0x4, align 4
    int32 rock_speed; // offset 0x874, size 0x4, align 4
    int32 damage; // offset 0x878, size 0x4, align 4
    int32 damage_str; // offset 0x87C, size 0x4, align 4
    float32 distance; // offset 0x880, size 0x4, align 4
    float32 rock_distance; // offset 0x884, size 0x4, align 4
    float32 rock_distance_multiplier; // offset 0x888, size 0x4, align 4
    float32 slow_duration; // offset 0x88C, size 0x4, align 4
    int32 destroy_stone; // offset 0x890, size 0x4, align 4
    bool can_roll_over_allied_heroes; // offset 0x894, size 0x1, align 1
    char _pad_0895[0x3]; // offset 0x895
    float32 allied_hero_distance; // offset 0x898, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x89C, size 0x4, align 255
    bool m_boulderSetposBool; // offset 0x8A0, size 0x1, align 1
    char _pad_08A1[0x3]; // offset 0x8A1
    int32 m_nProjectileID; // offset 0x8A4, size 0x4, align 4
    VectorWS m_vStartingLocation; // offset 0x8A8, size 0xC, align 4
    VectorWS m_vProjectileLocation; // offset 0x8B4, size 0xC, align 4
    Vector m_vDir; // offset 0x8C0, size 0xC, align 4
    Vector m_vVel; // offset 0x8CC, size 0xC, align 4
    bool m_bUsedStone; // offset 0x8D8, size 0x1, align 1
    bool m_bRolledOverAlliedHero; // offset 0x8D9, size 0x1, align 1
    char _pad_08DA[0x2]; // offset 0x8DA
    Vector m_vRollDirection; // offset 0x8DC, size 0xC, align 4
};
