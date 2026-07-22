#pragma once

class CDOTA_Modifier_Rubick_Might_And_Magus : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 magic_resist_bonus; // offset 0x1A58, size 0x4, align 4
    float32 aoe_bonus; // offset 0x1A5C, size 0x4, align 4
    float32 aoe_bonus_duration; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
};
