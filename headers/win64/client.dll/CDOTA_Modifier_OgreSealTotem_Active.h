#pragma once

class CDOTA_Modifier_OgreSealTotem_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nCurrentBounce; // offset 0x1AA8, size 0x4, align 4
    int32 leap_distance; // offset 0x1AAC, size 0x4, align 4
    float32 leap_speed; // offset 0x1AB0, size 0x4, align 4
    float32 leap_acceleration; // offset 0x1AB4, size 0x4, align 4
    int32 leap_radius; // offset 0x1AB8, size 0x4, align 4
    float32 leap_bonus_duration; // offset 0x1ABC, size 0x4, align 4
    bool m_bLaunched; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x3]; // offset 0x1AC1
    float32 m_flFacingTarget; // offset 0x1AC4, size 0x4, align 4
    float32 movement_turn_rate; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
