#pragma once

class CDOTA_Modifier_Centaur_Stampede_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 cast_time_increase; // offset 0x1AA8, size 0x4, align 4
    int32 slow_movement_speed; // offset 0x1AAC, size 0x4, align 4
};
