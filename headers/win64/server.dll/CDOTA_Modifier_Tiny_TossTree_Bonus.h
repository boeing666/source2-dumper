#pragma once

class CDOTA_Modifier_Tiny_TossTree_Bonus : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AF8, size 0x4, align 4
    int32 splash_pct; // offset 0x1AFC, size 0x4, align 4
    float32 land_debuff_duration; // offset 0x1B00, size 0x4, align 4
    float32 splash_radius; // offset 0x1B04, size 0x4, align 4
    bool m_bNoSplash; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x7]; // offset 0x1B09
};
