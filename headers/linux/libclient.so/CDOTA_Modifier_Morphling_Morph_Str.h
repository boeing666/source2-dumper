#pragma once

class CDOTA_Modifier_Morphling_Morph_Str : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 mana_cost; // offset 0x1A78, size 0x4, align 4
    int32 points_per_tick; // offset 0x1A7C, size 0x4, align 4
    float32 morph_rate; // offset 0x1A80, size 0x4, align 4
    float32 m_flCooldown; // offset 0x1A84, size 0x4, align 4
    char _pad_1A88[0x18]; // offset 0x1A88
};
