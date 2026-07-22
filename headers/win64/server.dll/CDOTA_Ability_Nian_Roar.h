#pragma once

class CDOTA_Ability_Nian_Roar : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 base_projectiles; // offset 0x580, size 0x4, align 4
    int32 max_projectiles; // offset 0x584, size 0x4, align 4
    int32 projectile_step; // offset 0x588, size 0x4, align 4
    int32 base_speed; // offset 0x58C, size 0x4, align 4
    int32 speed_step; // offset 0x590, size 0x4, align 4
    int32 initial_radius; // offset 0x594, size 0x4, align 4
    int32 end_radius; // offset 0x598, size 0x4, align 4
    int32 damage; // offset 0x59C, size 0x4, align 4
    float32 base_interval; // offset 0x5A0, size 0x4, align 4
    float32 interval_step; // offset 0x5A4, size 0x4, align 4
    int32 m_nCastCount; // offset 0x5A8, size 0x4, align 4
    int32 m_nProjectiles; // offset 0x5AC, size 0x4, align 4
    int32 m_nWaveCount; // offset 0x5B0, size 0x4, align 4
    char _pad_05B4[0x4]; // offset 0x5B4
    CountdownTimer m_ctTimer; // offset 0x5B8, size 0x18, align 8
    float32 m_flTiming; // offset 0x5D0, size 0x4, align 4
    bool m_bScriptRoar; // offset 0x5D4, size 0x1, align 1
    char _pad_05D5[0x3]; // offset 0x5D5
};
