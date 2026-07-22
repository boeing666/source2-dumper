#pragma once

class CDOTA_Modifier_Spectre_ShadowStep_Illusion : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 radius; // offset 0x1A58, size 0x4, align 4
    int32 bonus_move_speed_illusion_pct; // offset 0x1A5C, size 0x4, align 4
    int32 move_speed; // offset 0x1A60, size 0x4, align 4
    float32 duration; // offset 0x1A64, size 0x4, align 4
    float32 m_flSpeed; // offset 0x1A68, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A6C, size 0x4, align 4
    bool m_bReachedTarget; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
};
