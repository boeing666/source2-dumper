#pragma once

class CDOTA_Modifier_Innate_Riki_Backstab : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 backstab_angle; // offset 0x1A58, size 0x4, align 4
    float32 damage_multiplier; // offset 0x1A5C, size 0x4, align 4
    float32 bonus_xp_kill; // offset 0x1A60, size 0x4, align 4
    float32 bonus_xp_assist; // offset 0x1A64, size 0x4, align 4
    float32 bonus_xp_assist_other; // offset 0x1A68, size 0x4, align 4
    float32 ally_multiplier; // offset 0x1A6C, size 0x4, align 4
    bool m_bBackstab; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
};
