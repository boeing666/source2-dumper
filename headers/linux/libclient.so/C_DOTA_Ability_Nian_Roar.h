#pragma once

class C_DOTA_Ability_Nian_Roar : public C_DOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 base_projectiles; // offset 0x824, size 0x4, align 4
    int32 max_projectiles; // offset 0x828, size 0x4, align 4
    int32 projectile_step; // offset 0x82C, size 0x4, align 4
    int32 base_speed; // offset 0x830, size 0x4, align 4
    int32 speed_step; // offset 0x834, size 0x4, align 4
    int32 initial_radius; // offset 0x838, size 0x4, align 4
    int32 end_radius; // offset 0x83C, size 0x4, align 4
    int32 damage; // offset 0x840, size 0x4, align 4
    float32 base_interval; // offset 0x844, size 0x4, align 4
    float32 interval_step; // offset 0x848, size 0x4, align 4
    int32 m_nCastCount; // offset 0x84C, size 0x4, align 4
    int32 m_nProjectiles; // offset 0x850, size 0x4, align 4
    int32 m_nWaveCount; // offset 0x854, size 0x4, align 4
    CountdownTimer m_ctTimer; // offset 0x858, size 0x18, align 8
    float32 m_flTiming; // offset 0x870, size 0x4, align 4
    bool m_bScriptRoar; // offset 0x874, size 0x1, align 1
    char _pad_0875[0x3]; // offset 0x875
};
