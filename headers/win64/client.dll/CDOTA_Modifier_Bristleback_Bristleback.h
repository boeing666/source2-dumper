#pragma once

class CDOTA_Modifier_Bristleback_Bristleback : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 side_damage_reduction; // offset 0x1AA8, size 0x4, align 4
    int32 back_damage_reduction; // offset 0x1AAC, size 0x4, align 4
    int32 side_angle; // offset 0x1AB0, size 0x4, align 4
    int32 back_angle; // offset 0x1AB4, size 0x4, align 4
    float32 quill_release_threshold; // offset 0x1AB8, size 0x4, align 4
    float32 quill_release_interval; // offset 0x1ABC, size 0x4, align 4
    bool m_bRearHit; // offset 0x1AC0, size 0x1, align 1
    bool m_bSideHit; // offset 0x1AC1, size 0x1, align 1
    char _pad_1AC2[0x2]; // offset 0x1AC2
    float32 m_flDamageAccumulated; // offset 0x1AC4, size 0x4, align 4
    int32 m_nAccumulatedHits; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
