#pragma once

class CDOTA_Modifier_Disruptor_ElectromagneticRepulsion_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 damage_threshold; // offset 0x1A58, size 0x4, align 4
    float32 effect_radius; // offset 0x1A5C, size 0x4, align 4
    float32 knockback_duration; // offset 0x1A60, size 0x4, align 4
    float32 damage_reset_interval; // offset 0x1A64, size 0x4, align 4
};
