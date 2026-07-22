#pragma once

class CDOTA_Modifier_Lich_Sinister_Gaze : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 movement_speed; // offset 0x1A58, size 0x4, align 4
    int32 mana_drain; // offset 0x1A5C, size 0x4, align 4
    float32 m_flIntervalRate; // offset 0x1A60, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A64, size 0x4, align 255
    bool m_bBlasted; // offset 0x1A68, size 0x1, align 1
    bool m_bDebuffImmune; // offset 0x1A69, size 0x1, align 1
    char _pad_1A6A[0x2]; // offset 0x1A6A
    float32 post_gaze_debuff_duration_multiplier; // offset 0x1A6C, size 0x4, align 4
};
