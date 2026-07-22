#pragma once

class CDOTA_Modifier_Lion_ManaDrain : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 mana_per_second; // offset 0x1A58, size 0x4, align 4
    int32 break_distance; // offset 0x1A5C, size 0x4, align 4
    float32 tick_interval; // offset 0x1A60, size 0x4, align 4
    int32 movespeed; // offset 0x1A64, size 0x4, align 4
    int32 damage_pct; // offset 0x1A68, size 0x4, align 4
    int32 ally_pct; // offset 0x1A6C, size 0x4, align 4
    int32 movespeed_bonus_when_empty_pct; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x14]; // offset 0x1A74
};
