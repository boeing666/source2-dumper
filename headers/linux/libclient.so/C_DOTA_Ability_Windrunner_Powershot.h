#pragma once

class C_DOTA_Ability_Windrunner_Powershot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x838]; // offset 0x0
    GameTime_t m_fStartTime; // offset 0x838, size 0x4, align 255
    float32 m_fPower; // offset 0x83C, size 0x4, align 4
    int32 m_iProjectile; // offset 0x840, size 0x4, align 4
    float32 damage_reduction; // offset 0x844, size 0x4, align 4
    float32 arrow_width; // offset 0x848, size 0x4, align 4
    int32 powershot_damage; // offset 0x84C, size 0x4, align 4
    float32 tree_width; // offset 0x850, size 0x4, align 4
    float32 slow; // offset 0x854, size 0x4, align 4
    float32 slow_duration; // offset 0x858, size 0x4, align 4
    float32 min_execute_threshold; // offset 0x85C, size 0x4, align 4
    float32 max_execute_threshold; // offset 0x860, size 0x4, align 4
    bool m_bAwardedKillEater; // offset 0x864, size 0x1, align 1
    char _pad_0865[0x3]; // offset 0x865
    int32 m_nHeroesHit; // offset 0x868, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x86C, size 0x4, align 255
};
