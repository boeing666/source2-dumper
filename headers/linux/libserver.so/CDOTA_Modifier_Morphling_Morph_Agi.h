#pragma once

class CDOTA_Modifier_Morphling_Morph_Agi : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 mana_cost; // offset 0x1AF8, size 0x4, align 4
    int32 points_per_tick; // offset 0x1AFC, size 0x4, align 4
    float32 morph_rate; // offset 0x1B00, size 0x4, align 4
    float32 m_flCooldown; // offset 0x1B04, size 0x4, align 4
    char _pad_1B08[0x18]; // offset 0x1B08
};
