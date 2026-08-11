#pragma once

class CDOTA_Modifier_Spectre_ShadowStep_Illusion : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 radius; // offset 0x1A78, size 0x4, align 4
    int32 bonus_move_speed_illusion_pct; // offset 0x1A7C, size 0x4, align 4
    int32 move_speed; // offset 0x1A80, size 0x4, align 4
    float32 duration; // offset 0x1A84, size 0x4, align 4
    float32 m_flSpeed; // offset 0x1A88, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A8C, size 0x4, align 4
    bool m_bReachedTarget; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x7]; // offset 0x1A91
};
