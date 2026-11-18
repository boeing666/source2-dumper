#pragma once

class CDOTA_Modifier_Night_Stalker_Heart_Of_Darkness : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 hp_regen_during_night_pct; // offset 0x1AF8, size 0x4, align 4
    float32 hp_regen_during_day_pct; // offset 0x1AFC, size 0x4, align 4
    float32 affects_mana_regen; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
