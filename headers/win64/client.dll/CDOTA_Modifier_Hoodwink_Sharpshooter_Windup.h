#pragma once

class CDOTA_Modifier_Hoodwink_Sharpshooter_Windup : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 arrow_vision; // offset 0x1A78, size 0x4, align 4
    float32 max_charge_time; // offset 0x1A7C, size 0x4, align 4
    float32 turn_rate; // offset 0x1A80, size 0x4, align 4
    float32 base_power; // offset 0x1A84, size 0x4, align 4
};
