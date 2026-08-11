#pragma once

class CDOTA_Modifier_Innate_Riki_Backstab : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 backstab_angle; // offset 0x1A78, size 0x4, align 4
    float32 damage_multiplier; // offset 0x1A7C, size 0x4, align 4
    float32 bonus_xp_kill; // offset 0x1A80, size 0x4, align 4
    float32 bonus_xp_assist; // offset 0x1A84, size 0x4, align 4
    float32 bonus_xp_assist_other; // offset 0x1A88, size 0x4, align 4
    float32 ally_multiplier; // offset 0x1A8C, size 0x4, align 4
    bool m_bBackstab; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x7]; // offset 0x1A91
};
