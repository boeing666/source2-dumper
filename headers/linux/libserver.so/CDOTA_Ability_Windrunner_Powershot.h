#pragma once

class CDOTA_Ability_Windrunner_Powershot : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x870]; // offset 0x0
    GameTime_t m_fStartTime; // offset 0x870, size 0x4, align 255
    float32 m_fPower; // offset 0x874, size 0x4, align 4
    int32 m_iProjectile; // offset 0x878, size 0x4, align 4
    float32 damage_reduction; // offset 0x87C, size 0x4, align 4
    float32 arrow_width; // offset 0x880, size 0x4, align 4
    int32 powershot_damage; // offset 0x884, size 0x4, align 4
    float32 tree_width; // offset 0x888, size 0x4, align 4
    float32 slow; // offset 0x88C, size 0x4, align 4
    float32 slow_duration; // offset 0x890, size 0x4, align 4
    float32 min_execute_threshold; // offset 0x894, size 0x4, align 4
    float32 max_execute_threshold; // offset 0x898, size 0x4, align 4
    bool m_bAwardedKillEater; // offset 0x89C, size 0x1, align 1
    char _pad_089D[0x3]; // offset 0x89D
    int32 m_nHeroesHit; // offset 0x8A0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x8A4, size 0x4, align 255
};
