#pragma once

class CDOTA_Modifier_Ringmaster_Impalement_Bleed : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bleed_health_pct; // offset 0x1AF8, size 0x4, align 4
    float32 tick_interval; // offset 0x1AFC, size 0x4, align 4
    float32 wheel_damage_multiplier; // offset 0x1B00, size 0x4, align 4
    float32 slow_percent; // offset 0x1B04, size 0x4, align 4
    float32 bleed_creep_dps; // offset 0x1B08, size 0x4, align 4
    float32 slow_duration; // offset 0x1B0C, size 0x4, align 4
};
