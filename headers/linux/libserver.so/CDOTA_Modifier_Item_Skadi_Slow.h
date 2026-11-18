#pragma once

class CDOTA_Modifier_Item_Skadi_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 cold_slow_melee; // offset 0x1AF8, size 0x4, align 4
    float32 cold_slow_ranged; // offset 0x1AFC, size 0x4, align 4
    float32 cold_attack_slow_melee; // offset 0x1B00, size 0x4, align 4
    float32 cold_attack_slow_ranged; // offset 0x1B04, size 0x4, align 4
    float32 restoration_reduction; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
