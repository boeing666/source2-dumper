#pragma once

class CDOTA_Modifier_Bristleback_Bristleback : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 side_damage_reduction; // offset 0x1A58, size 0x4, align 4
    int32 back_damage_reduction; // offset 0x1A5C, size 0x4, align 4
    int32 side_angle; // offset 0x1A60, size 0x4, align 4
    int32 back_angle; // offset 0x1A64, size 0x4, align 4
    float32 quill_release_threshold; // offset 0x1A68, size 0x4, align 4
    float32 quill_release_interval; // offset 0x1A6C, size 0x4, align 4
    bool m_bRearHit; // offset 0x1A70, size 0x1, align 1
    bool m_bSideHit; // offset 0x1A71, size 0x1, align 1
    char _pad_1A72[0x2]; // offset 0x1A72
    float32 m_flDamageAccumulated; // offset 0x1A74, size 0x4, align 4
    int32 m_nAccumulatedHits; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
