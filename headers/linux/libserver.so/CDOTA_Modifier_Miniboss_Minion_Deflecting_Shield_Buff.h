#pragma once

class CDOTA_Modifier_Miniboss_Minion_Deflecting_Shield_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 max_barrier_pct_max_health; // offset 0x1AF8, size 0x4, align 4
    float32 owner_max_barrier_pct_max_health; // offset 0x1AFC, size 0x4, align 4
    float32 regeneration_to_max_seconds; // offset 0x1B00, size 0x4, align 4
    float32 decay_to_zero_seconds; // offset 0x1B04, size 0x4, align 4
    float32 damage_reflection_pct; // offset 0x1B08, size 0x4, align 4
    float32 damage_cooldown; // offset 0x1B0C, size 0x4, align 4
    float32 aura_radius; // offset 0x1B10, size 0x4, align 4
    float32 m_flMaxBarrier; // offset 0x1B14, size 0x4, align 4
    float32 m_flBarrierAmount; // offset 0x1B18, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1B1C, size 0x4, align 255
    GameTime_t m_timeLastDamage; // offset 0x1B20, size 0x4, align 255
    char _pad_1B24[0x14]; // offset 0x1B24
};
