#pragma once

class C_DOTA_Ability_Warlock_Upheaval : public C_DOTABaseAbility /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    VectorWS m_vPosition; // offset 0x828, size 0xC, align 4
    float32 aoe; // offset 0x834, size 0x4, align 4
    int32 slow_per_second; // offset 0x838, size 0x4, align 4
    int32 aspd_per_second; // offset 0x83C, size 0x4, align 4
    int32 max_slow; // offset 0x840, size 0x4, align 4
    int32 base_damage; // offset 0x844, size 0x4, align 4
    int32 damage_per_second; // offset 0x848, size 0x4, align 4
    int32 max_damage; // offset 0x84C, size 0x4, align 4
    float32 damage_tick_interval; // offset 0x850, size 0x4, align 4
    char _pad_0854[0x4]; // offset 0x854
    CountdownTimer m_timer; // offset 0x858, size 0x18, align 8
    CountdownTimer m_shardTimer; // offset 0x870, size 0x18, align 8
    float32 duration; // offset 0x888, size 0x4, align 4
    GameTime_t m_flElapsedTime; // offset 0x88C, size 0x4, align 255
    float32 m_flCurrentSlow; // offset 0x890, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x894, size 0x4, align 255
    ParticleIndex_t m_nCastFXIndex; // offset 0x898, size 0x4, align 255
    char _pad_089C[0x14]; // offset 0x89C
    bool m_bTargetCast; // offset 0x8B0, size 0x1, align 1
    char _pad_08B1[0x3]; // offset 0x8B1
    CHandle< C_BaseEntity > m_hTarget; // offset 0x8B4, size 0x4, align 4
};
