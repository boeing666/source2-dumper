#pragma once

class CDOTA_Ability_Warlock_Upheaval : public CDOTABaseAbility /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vPosition; // offset 0x580, size 0xC, align 4
    float32 aoe; // offset 0x58C, size 0x4, align 4
    int32 slow_per_second; // offset 0x590, size 0x4, align 4
    int32 aspd_per_second; // offset 0x594, size 0x4, align 4
    int32 max_slow; // offset 0x598, size 0x4, align 4
    int32 base_damage; // offset 0x59C, size 0x4, align 4
    int32 damage_per_second; // offset 0x5A0, size 0x4, align 4
    int32 max_damage; // offset 0x5A4, size 0x4, align 4
    float32 damage_tick_interval; // offset 0x5A8, size 0x4, align 4
    char _pad_05AC[0x4]; // offset 0x5AC
    CountdownTimer m_timer; // offset 0x5B0, size 0x18, align 8
    CountdownTimer m_shardTimer; // offset 0x5C8, size 0x18, align 8
    float32 duration; // offset 0x5E0, size 0x4, align 4
    GameTime_t m_flElapsedTime; // offset 0x5E4, size 0x4, align 255
    float32 m_flCurrentSlow; // offset 0x5E8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x5EC, size 0x4, align 255
    ParticleIndex_t m_nCastFXIndex; // offset 0x5F0, size 0x4, align 255
    char _pad_05F4[0x14]; // offset 0x5F4
    bool m_bTargetCast; // offset 0x608, size 0x1, align 1
    char _pad_0609[0x3]; // offset 0x609
    CHandle< CBaseEntity > m_hTarget; // offset 0x60C, size 0x4, align 4
};
