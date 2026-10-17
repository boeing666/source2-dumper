#pragma once

class CDOTA_Modifier_PrimalBeast_Onslaught_Windup : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 max_distance; // offset 0x1AA8, size 0x4, align 4
    float32 max_charge_time; // offset 0x1AAC, size 0x4, align 4
    float32 turn_rate; // offset 0x1AB0, size 0x4, align 4
    float32 base_power; // offset 0x1AB4, size 0x4, align 4
    int32 charge_speed; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
