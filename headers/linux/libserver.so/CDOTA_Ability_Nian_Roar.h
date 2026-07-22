#pragma once

class CDOTA_Ability_Nian_Roar : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 base_projectiles; // offset 0x85C, size 0x4, align 4
    int32 max_projectiles; // offset 0x860, size 0x4, align 4
    int32 projectile_step; // offset 0x864, size 0x4, align 4
    int32 base_speed; // offset 0x868, size 0x4, align 4
    int32 speed_step; // offset 0x86C, size 0x4, align 4
    int32 initial_radius; // offset 0x870, size 0x4, align 4
    int32 end_radius; // offset 0x874, size 0x4, align 4
    int32 damage; // offset 0x878, size 0x4, align 4
    float32 base_interval; // offset 0x87C, size 0x4, align 4
    float32 interval_step; // offset 0x880, size 0x4, align 4
    int32 m_nCastCount; // offset 0x884, size 0x4, align 4
    int32 m_nProjectiles; // offset 0x888, size 0x4, align 4
    int32 m_nWaveCount; // offset 0x88C, size 0x4, align 4
    CountdownTimer m_ctTimer; // offset 0x890, size 0x18, align 8
    float32 m_flTiming; // offset 0x8A8, size 0x4, align 4
    bool m_bScriptRoar; // offset 0x8AC, size 0x1, align 1
    char _pad_08AD[0x3]; // offset 0x8AD
};
