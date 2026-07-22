#pragma once

class CDOTA_Modifier_Tinker_LaserBlind : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 miss_rate; // offset 0x1A58, size 0x4, align 4
    float32 max_health_removed; // offset 0x1A5C, size 0x4, align 4
    int32 scepter_reduction_pierces_debuff_immunity; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
};
