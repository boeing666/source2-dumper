#pragma once

class CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 max_barrier_pct_max_health; // offset 0x1A78, size 0x4, align 4
    float32 owner_max_barrier_pct_max_health; // offset 0x1A7C, size 0x4, align 4
    float32 regeneration_to_max_seconds; // offset 0x1A80, size 0x4, align 4
    float32 decay_to_zero_seconds; // offset 0x1A84, size 0x4, align 4
    float32 damage_reflection_pct; // offset 0x1A88, size 0x4, align 4
    float32 damage_cooldown; // offset 0x1A8C, size 0x4, align 4
    float32 aura_radius; // offset 0x1A90, size 0x4, align 4
    float32 m_flMaxBarrier; // offset 0x1A94, size 0x4, align 4
    float32 m_flBarrierAmount; // offset 0x1A98, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1A9C, size 0x4, align 255
    GameTime_t m_timeLastDamage; // offset 0x1AA0, size 0x4, align 255
    char _pad_1AA4[0x14]; // offset 0x1AA4
};
