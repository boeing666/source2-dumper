#pragma once

class CDOTA_Modifier_Lion_ManaDrain : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 mana_per_second; // offset 0x1A78, size 0x4, align 4
    int32 break_distance; // offset 0x1A7C, size 0x4, align 4
    float32 tick_interval; // offset 0x1A80, size 0x4, align 4
    int32 movespeed; // offset 0x1A84, size 0x4, align 4
    int32 damage_pct; // offset 0x1A88, size 0x4, align 4
    int32 ally_pct; // offset 0x1A8C, size 0x4, align 4
    int32 movespeed_bonus_when_empty_pct; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x14]; // offset 0x1A94
};
