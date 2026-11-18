#pragma once

class CDOTA_Modifier_TemplarAssassin_Trap_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 movement_speed_min; // offset 0x1AF8, size 0x4, align 4
    int32 movement_speed_max; // offset 0x1AFC, size 0x4, align 4
    int32 extra_damage; // offset 0x1B00, size 0x4, align 4
    float32 trap_max_charge_duration; // offset 0x1B04, size 0x4, align 4
    float32 min_silence_duration; // offset 0x1B08, size 0x4, align 4
    float32 max_silence_duration; // offset 0x1B0C, size 0x4, align 4
    float32 stage; // offset 0x1B10, size 0x4, align 4
    float32 flDamagePerTick; // offset 0x1B14, size 0x4, align 4
    bool bExtraDamage; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x7]; // offset 0x1B19
};
