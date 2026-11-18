#pragma once

class CDOTA_Modifier_Bristleback_Bristleback : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 side_damage_reduction; // offset 0x1AF8, size 0x4, align 4
    int32 back_damage_reduction; // offset 0x1AFC, size 0x4, align 4
    int32 side_angle; // offset 0x1B00, size 0x4, align 4
    int32 back_angle; // offset 0x1B04, size 0x4, align 4
    float32 quill_release_threshold; // offset 0x1B08, size 0x4, align 4
    float32 quill_release_interval; // offset 0x1B0C, size 0x4, align 4
    bool m_bRearHit; // offset 0x1B10, size 0x1, align 1
    bool m_bSideHit; // offset 0x1B11, size 0x1, align 1
    char _pad_1B12[0x2]; // offset 0x1B12
    float32 m_flDamageAccumulated; // offset 0x1B14, size 0x4, align 4
    int32 m_nAccumulatedHits; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
