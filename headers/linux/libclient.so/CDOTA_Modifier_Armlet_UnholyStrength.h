#pragma once

class CDOTA_Modifier_Armlet_UnholyStrength : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 unholy_bonus_damage; // offset 0x1A78, size 0x4, align 4
    int32 unholy_bonus_attack_speed; // offset 0x1A7C, size 0x4, align 4
    int32 unholy_bonus_strength; // offset 0x1A80, size 0x4, align 4
    int32 unholy_bonus_armor; // offset 0x1A84, size 0x4, align 4
    int32 unholy_health_drain_per_second; // offset 0x1A88, size 0x4, align 4
    int32 str_tick_count; // offset 0x1A8C, size 0x4, align 4
    int32 unholy_bonus_slow_resistance; // offset 0x1A90, size 0x4, align 4
    float32 tick_interval; // offset 0x1A94, size 0x4, align 4
    float32 m_flDamageRemainder; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
