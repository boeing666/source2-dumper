#pragma once

class CDOTA_Modifier_Winter_Wyvern_Cold_Embrace : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1ABC]; // offset 0x0
    float32 heal_additive; // offset 0x1ABC, size 0x4, align 4
    float32 heal_percentage; // offset 0x1AC0, size 0x4, align 4
    float32 tick_interval; // offset 0x1AC4, size 0x4, align 4
    float32 damage_buff_pct; // offset 0x1AC8, size 0x4, align 4
    float32 damage_buff_duration; // offset 0x1ACC, size 0x4, align 4
};
