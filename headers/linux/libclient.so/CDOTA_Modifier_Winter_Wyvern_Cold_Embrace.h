#pragma once

class CDOTA_Modifier_Winter_Wyvern_Cold_Embrace : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A6C]; // offset 0x0
    float32 heal_additive; // offset 0x1A6C, size 0x4, align 4
    float32 heal_percentage; // offset 0x1A70, size 0x4, align 4
    float32 tick_interval; // offset 0x1A74, size 0x4, align 4
    float32 damage_buff_pct; // offset 0x1A78, size 0x4, align 4
    float32 damage_buff_duration; // offset 0x1A7C, size 0x4, align 4
};
