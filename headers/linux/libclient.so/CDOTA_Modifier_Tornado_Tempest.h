#pragma once

class CDOTA_Modifier_Tornado_Tempest : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 near_radius; // offset 0x1A78, size 0x4, align 4
    int32 near_damage; // offset 0x1A7C, size 0x4, align 4
    float32 far_radius; // offset 0x1A80, size 0x4, align 4
    int32 far_damage; // offset 0x1A84, size 0x4, align 4
    float32 tick_rate; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x14]; // offset 0x1A8C
};
