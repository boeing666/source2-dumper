#pragma once

class CDOTA_Modifier_OgreSealTotem_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nCurrentBounce; // offset 0x1A78, size 0x4, align 4
    int32 leap_distance; // offset 0x1A7C, size 0x4, align 4
    float32 leap_speed; // offset 0x1A80, size 0x4, align 4
    float32 leap_acceleration; // offset 0x1A84, size 0x4, align 4
    int32 leap_radius; // offset 0x1A88, size 0x4, align 4
    float32 leap_bonus_duration; // offset 0x1A8C, size 0x4, align 4
    bool m_bLaunched; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x3]; // offset 0x1A91
    float32 m_flFacingTarget; // offset 0x1A94, size 0x4, align 4
    float32 movement_turn_rate; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
