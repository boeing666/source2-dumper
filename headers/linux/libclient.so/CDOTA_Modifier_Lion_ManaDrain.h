#pragma once

class CDOTA_Modifier_Lion_ManaDrain : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 mana_per_second; // offset 0x1AA8, size 0x4, align 4
    int32 break_distance; // offset 0x1AAC, size 0x4, align 4
    float32 tick_interval; // offset 0x1AB0, size 0x4, align 4
    int32 movespeed; // offset 0x1AB4, size 0x4, align 4
    int32 damage_pct; // offset 0x1AB8, size 0x4, align 4
    int32 ally_pct; // offset 0x1ABC, size 0x4, align 4
    int32 movespeed_bonus_when_empty_pct; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x14]; // offset 0x1AC4
};
