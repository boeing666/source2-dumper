#pragma once

class CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 damage_threshold; // offset 0x1AA8, size 0x4, align 4
    float32 effect_radius; // offset 0x1AAC, size 0x4, align 4
    float32 knockback_duration; // offset 0x1AB0, size 0x4, align 4
    float32 damage_reset_interval; // offset 0x1AB4, size 0x4, align 4
};
