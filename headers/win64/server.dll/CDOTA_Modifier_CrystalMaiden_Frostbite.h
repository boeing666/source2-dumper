#pragma once

class CDOTA_Modifier_CrystalMaiden_Frostbite : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 max_ticks; // offset 0x1AF8, size 0x4, align 4
    int32 damage_per_second; // offset 0x1AFC, size 0x4, align 4
    int32 creep_multiplier; // offset 0x1B00, size 0x4, align 4
    float32 tick_interval; // offset 0x1B04, size 0x4, align 4
};
