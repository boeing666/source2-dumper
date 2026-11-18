#pragma once

class CDOTA_Modifier_Ascension_Bulwark : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 physical_damage_reduction; // offset 0x1AF8, size 0x4, align 4
    float32 physical_damage_reduction_side; // offset 0x1AFC, size 0x4, align 4
    float32 forward_angle; // offset 0x1B00, size 0x4, align 4
    float32 side_angle; // offset 0x1B04, size 0x4, align 4
};
