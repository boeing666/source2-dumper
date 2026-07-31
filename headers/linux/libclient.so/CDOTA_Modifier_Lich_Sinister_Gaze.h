#pragma once

class CDOTA_Modifier_Lich_Sinister_Gaze : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 movement_speed; // offset 0x1A78, size 0x4, align 4
    int32 mana_drain; // offset 0x1A7C, size 0x4, align 4
    float32 m_flIntervalRate; // offset 0x1A80, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A84, size 0x4, align 255
    bool m_bBlasted; // offset 0x1A88, size 0x1, align 1
    bool m_bDebuffImmune; // offset 0x1A89, size 0x1, align 1
    char _pad_1A8A[0x2]; // offset 0x1A8A
    float32 post_gaze_debuff_duration_multiplier; // offset 0x1A8C, size 0x4, align 4
};
