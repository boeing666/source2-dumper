#pragma once

class CDOTA_Ability_Windrunner_Powershot : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x594]; // offset 0x0
    GameTime_t m_fStartTime; // offset 0x594, size 0x4, align 255
    float32 m_fPower; // offset 0x598, size 0x4, align 4
    int32 m_iProjectile; // offset 0x59C, size 0x4, align 4
    float32 damage_reduction; // offset 0x5A0, size 0x4, align 4
    float32 arrow_width; // offset 0x5A4, size 0x4, align 4
    int32 powershot_damage; // offset 0x5A8, size 0x4, align 4
    float32 tree_width; // offset 0x5AC, size 0x4, align 4
    float32 slow; // offset 0x5B0, size 0x4, align 4
    float32 slow_duration; // offset 0x5B4, size 0x4, align 4
    float32 min_execute_threshold; // offset 0x5B8, size 0x4, align 4
    float32 max_execute_threshold; // offset 0x5BC, size 0x4, align 4
    bool m_bAwardedKillEater; // offset 0x5C0, size 0x1, align 1
    char _pad_05C1[0x3]; // offset 0x5C1
    int32 m_nHeroesHit; // offset 0x5C4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x5C8, size 0x4, align 255
    char _pad_05CC[0x4]; // offset 0x5CC
};
