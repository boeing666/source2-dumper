#pragma once

class CDOTA_Modifier_Armlet_UnholyStrength : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 unholy_bonus_damage; // offset 0x1AF8, size 0x4, align 4
    int32 unholy_bonus_attack_speed; // offset 0x1AFC, size 0x4, align 4
    int32 unholy_bonus_strength; // offset 0x1B00, size 0x4, align 4
    int32 unholy_bonus_armor; // offset 0x1B04, size 0x4, align 4
    int32 unholy_health_drain_per_second; // offset 0x1B08, size 0x4, align 4
    int32 str_tick_count; // offset 0x1B0C, size 0x4, align 4
    int32 unholy_bonus_slow_resistance; // offset 0x1B10, size 0x4, align 4
    float32 tick_interval; // offset 0x1B14, size 0x4, align 4
};
