#pragma once

class CDOTA_Modifier_Spectre_ShadowStep_Illusion : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_move_speed_illusion_pct; // offset 0x1AFC, size 0x4, align 4
    int32 move_speed; // offset 0x1B00, size 0x4, align 4
    float32 duration; // offset 0x1B04, size 0x4, align 4
    float32 m_flSpeed; // offset 0x1B08, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B0C, size 0x4, align 4
    bool m_bReachedTarget; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
};
