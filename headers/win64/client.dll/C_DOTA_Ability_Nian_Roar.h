#pragma once

class C_DOTA_Ability_Nian_Roar : public C_DOTABaseAbility /*0x0*/  // sizeof 0x700, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 base_projectiles; // offset 0x6A8, size 0x4, align 4
    int32 max_projectiles; // offset 0x6AC, size 0x4, align 4
    int32 projectile_step; // offset 0x6B0, size 0x4, align 4
    int32 base_speed; // offset 0x6B4, size 0x4, align 4
    int32 speed_step; // offset 0x6B8, size 0x4, align 4
    int32 initial_radius; // offset 0x6BC, size 0x4, align 4
    int32 end_radius; // offset 0x6C0, size 0x4, align 4
    int32 damage; // offset 0x6C4, size 0x4, align 4
    float32 base_interval; // offset 0x6C8, size 0x4, align 4
    float32 interval_step; // offset 0x6CC, size 0x4, align 4
    int32 m_nCastCount; // offset 0x6D0, size 0x4, align 4
    int32 m_nProjectiles; // offset 0x6D4, size 0x4, align 4
    int32 m_nWaveCount; // offset 0x6D8, size 0x4, align 4
    char _pad_06DC[0x4]; // offset 0x6DC
    CountdownTimer m_ctTimer; // offset 0x6E0, size 0x18, align 8
    float32 m_flTiming; // offset 0x6F8, size 0x4, align 4
    bool m_bScriptRoar; // offset 0x6FC, size 0x1, align 1
    char _pad_06FD[0x3]; // offset 0x6FD
};
