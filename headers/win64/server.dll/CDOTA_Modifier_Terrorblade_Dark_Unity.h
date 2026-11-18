#pragma once

class CDOTA_Modifier_Terrorblade_Dark_Unity : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bInsideRadius; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    float32 radius; // offset 0x1AFC, size 0x4, align 4
    int32 inside_radius_bonus_damage_pct; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
