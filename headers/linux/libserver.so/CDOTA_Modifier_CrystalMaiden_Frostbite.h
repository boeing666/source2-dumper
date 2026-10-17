#pragma once

class CDOTA_Modifier_CrystalMaiden_Frostbite : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 max_ticks; // offset 0x1AA8, size 0x4, align 4
    int32 damage_per_second; // offset 0x1AAC, size 0x4, align 4
    int32 creep_multiplier; // offset 0x1AB0, size 0x4, align 4
    float32 tick_interval; // offset 0x1AB4, size 0x4, align 4
};
