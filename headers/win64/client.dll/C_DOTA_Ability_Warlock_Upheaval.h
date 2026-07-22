#pragma once

class C_DOTA_Ability_Warlock_Upheaval : public C_DOTABaseAbility /*0x0*/  // sizeof 0x738, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vPosition; // offset 0x6A8, size 0xC, align 4
    float32 aoe; // offset 0x6B4, size 0x4, align 4
    int32 slow_per_second; // offset 0x6B8, size 0x4, align 4
    int32 aspd_per_second; // offset 0x6BC, size 0x4, align 4
    int32 max_slow; // offset 0x6C0, size 0x4, align 4
    int32 base_damage; // offset 0x6C4, size 0x4, align 4
    int32 damage_per_second; // offset 0x6C8, size 0x4, align 4
    int32 max_damage; // offset 0x6CC, size 0x4, align 4
    float32 damage_tick_interval; // offset 0x6D0, size 0x4, align 4
    char _pad_06D4[0x4]; // offset 0x6D4
    CountdownTimer m_timer; // offset 0x6D8, size 0x18, align 8
    CountdownTimer m_shardTimer; // offset 0x6F0, size 0x18, align 8
    float32 duration; // offset 0x708, size 0x4, align 4
    GameTime_t m_flElapsedTime; // offset 0x70C, size 0x4, align 255
    float32 m_flCurrentSlow; // offset 0x710, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x714, size 0x4, align 255
    ParticleIndex_t m_nCastFXIndex; // offset 0x718, size 0x4, align 255
    char _pad_071C[0x14]; // offset 0x71C
    bool m_bTargetCast; // offset 0x730, size 0x1, align 1
    char _pad_0731[0x3]; // offset 0x731
    CHandle< C_BaseEntity > m_hTarget; // offset 0x734, size 0x4, align 4
};
