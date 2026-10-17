#pragma once

class CDOTA_Modifier_Mars_Bulwark : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 physical_damage_reduction; // offset 0x1AA8, size 0x4, align 4
    float32 physical_damage_reduction_side; // offset 0x1AAC, size 0x4, align 4
    float32 forward_angle; // offset 0x1AB0, size 0x4, align 4
    float32 side_angle; // offset 0x1AB4, size 0x4, align 4
};
