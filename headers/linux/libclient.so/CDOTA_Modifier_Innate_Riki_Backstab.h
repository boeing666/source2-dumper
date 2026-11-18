#pragma once

class CDOTA_Modifier_Innate_Riki_Backstab : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 backstab_angle; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_potency; // offset 0x1AFC, size 0x4, align 4
    float32 damage_multiplier; // offset 0x1B00, size 0x4, align 4
    float32 bonus_xp_kill; // offset 0x1B04, size 0x4, align 4
    float32 bonus_xp_assist; // offset 0x1B08, size 0x4, align 4
    float32 bonus_xp_assist_other; // offset 0x1B0C, size 0x4, align 4
    float32 ally_multiplier; // offset 0x1B10, size 0x4, align 4
    bool m_bBackstab; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
};
