#pragma once

class CDOTA_Modifier_Ringmaster_Impalement_Bleed : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 bleed_health_pct; // offset 0x1A58, size 0x4, align 4
    float32 tick_interval; // offset 0x1A5C, size 0x4, align 4
    float32 wheel_damage_multiplier; // offset 0x1A60, size 0x4, align 4
    float32 slow_percent; // offset 0x1A64, size 0x4, align 4
    float32 bleed_creep_dps; // offset 0x1A68, size 0x4, align 4
    float32 slow_duration; // offset 0x1A6C, size 0x4, align 4
};
