#pragma once

class C_DOTA_Ability_Windrunner_Powershot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6BC]; // offset 0x0
    GameTime_t m_fStartTime; // offset 0x6BC, size 0x4, align 255
    float32 m_fPower; // offset 0x6C0, size 0x4, align 4
    int32 m_iProjectile; // offset 0x6C4, size 0x4, align 4
    float32 damage_reduction; // offset 0x6C8, size 0x4, align 4
    float32 arrow_width; // offset 0x6CC, size 0x4, align 4
    int32 powershot_damage; // offset 0x6D0, size 0x4, align 4
    float32 tree_width; // offset 0x6D4, size 0x4, align 4
    float32 slow; // offset 0x6D8, size 0x4, align 4
    float32 slow_duration; // offset 0x6DC, size 0x4, align 4
    float32 min_execute_threshold; // offset 0x6E0, size 0x4, align 4
    float32 max_execute_threshold; // offset 0x6E4, size 0x4, align 4
    bool m_bAwardedKillEater; // offset 0x6E8, size 0x1, align 1
    char _pad_06E9[0x3]; // offset 0x6E9
    int32 m_nHeroesHit; // offset 0x6EC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6F0, size 0x4, align 255
    char _pad_06F4[0x4]; // offset 0x6F4
};
