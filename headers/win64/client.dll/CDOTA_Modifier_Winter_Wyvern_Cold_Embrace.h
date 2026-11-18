#pragma once

class CDOTA_Modifier_Winter_Wyvern_Cold_Embrace : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B0C]; // offset 0x0
    float32 heal_additive; // offset 0x1B0C, size 0x4, align 4
    float32 heal_percentage; // offset 0x1B10, size 0x4, align 4
    float32 tick_interval; // offset 0x1B14, size 0x4, align 4
    float32 damage_buff_pct; // offset 0x1B18, size 0x4, align 4
    float32 damage_buff_duration; // offset 0x1B1C, size 0x4, align 4
};
