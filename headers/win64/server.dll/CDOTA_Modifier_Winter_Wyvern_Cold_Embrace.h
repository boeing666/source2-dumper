#pragma once

class CDOTA_Modifier_Winter_Wyvern_Cold_Embrace : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A8C]; // offset 0x0
    float32 heal_additive; // offset 0x1A8C, size 0x4, align 4
    float32 heal_percentage; // offset 0x1A90, size 0x4, align 4
    float32 tick_interval; // offset 0x1A94, size 0x4, align 4
    float32 damage_buff_pct; // offset 0x1A98, size 0x4, align 4
    float32 damage_buff_duration; // offset 0x1A9C, size 0x4, align 4
};
