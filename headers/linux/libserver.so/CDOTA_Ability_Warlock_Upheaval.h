#pragma once

class CDOTA_Ability_Warlock_Upheaval : public CDOTABaseAbility /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vPosition; // offset 0x85C, size 0xC, align 4
    float32 aoe; // offset 0x868, size 0x4, align 4
    int32 slow_per_second; // offset 0x86C, size 0x4, align 4
    int32 aspd_per_second; // offset 0x870, size 0x4, align 4
    int32 max_slow; // offset 0x874, size 0x4, align 4
    int32 base_damage; // offset 0x878, size 0x4, align 4
    int32 damage_per_second; // offset 0x87C, size 0x4, align 4
    int32 max_damage; // offset 0x880, size 0x4, align 4
    float32 damage_tick_interval; // offset 0x884, size 0x4, align 4
    CountdownTimer m_timer; // offset 0x888, size 0x18, align 8
    CountdownTimer m_shardTimer; // offset 0x8A0, size 0x18, align 8
    float32 duration; // offset 0x8B8, size 0x4, align 4
    GameTime_t m_flElapsedTime; // offset 0x8BC, size 0x4, align 255
    float32 m_flCurrentSlow; // offset 0x8C0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x8C4, size 0x4, align 255
    ParticleIndex_t m_nCastFXIndex; // offset 0x8C8, size 0x4, align 255
    char _pad_08CC[0x14]; // offset 0x8CC
    bool m_bTargetCast; // offset 0x8E0, size 0x1, align 1
    char _pad_08E1[0x3]; // offset 0x8E1
    CHandle< CBaseEntity > m_hTarget; // offset 0x8E4, size 0x4, align 4
};
