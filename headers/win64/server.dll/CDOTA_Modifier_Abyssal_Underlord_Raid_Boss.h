#pragma once

class CDOTA_Modifier_Abyssal_Underlord_Raid_Boss : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 barrier_max_health_pct; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_ms; // offset 0x1AFC, size 0x4, align 4
    float32 buff_duration; // offset 0x1B00, size 0x4, align 4
    float32 dark_portal_multiplier; // offset 0x1B04, size 0x4, align 4
};
