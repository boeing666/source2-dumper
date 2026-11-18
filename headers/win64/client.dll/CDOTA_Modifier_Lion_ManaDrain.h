#pragma once

class CDOTA_Modifier_Lion_ManaDrain : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 mana_per_second; // offset 0x1AF8, size 0x4, align 4
    int32 break_distance; // offset 0x1AFC, size 0x4, align 4
    float32 tick_interval; // offset 0x1B00, size 0x4, align 4
    int32 movespeed; // offset 0x1B04, size 0x4, align 4
    int32 damage_pct; // offset 0x1B08, size 0x4, align 4
    int32 ally_pct; // offset 0x1B0C, size 0x4, align 4
    int32 movespeed_bonus_when_empty_pct; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x14]; // offset 0x1B14
};
