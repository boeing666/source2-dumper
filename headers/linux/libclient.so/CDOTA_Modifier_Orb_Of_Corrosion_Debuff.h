#pragma once

class CDOTA_Modifier_Orb_Of_Corrosion_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 corruption_armor; // offset 0x1AF8, size 0x4, align 4
    float32 heal_reduction; // offset 0x1AFC, size 0x4, align 4
    float32 slow_melee; // offset 0x1B00, size 0x4, align 4
    float32 slow_ranged; // offset 0x1B04, size 0x4, align 4
};
