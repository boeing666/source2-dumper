#pragma once

class CDOTA_Modifier_TemplarAssassin_InnerPeace_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fElapsedTime; // offset 0x1AF8, size 0x4, align 4
    float32 max_attack_range; // offset 0x1AFC, size 0x4, align 4
    float32 max_hp_regen; // offset 0x1B00, size 0x4, align 4
    float32 max_mana_regen; // offset 0x1B04, size 0x4, align 4
    float32 time_until_meditation; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
    CountdownTimer m_StartMeditationTimer; // offset 0x1B10, size 0x18, align 8
    float32 m_fElapsedMeditationTime; // offset 0x1B28, size 0x4, align 4
    float32 m_fElapsedLingerTime; // offset 0x1B2C, size 0x4, align 4
    float32 time_until_max_bonus; // offset 0x1B30, size 0x4, align 4
    float32 bonus_linger_time; // offset 0x1B34, size 0x4, align 4
    int32 m_nCurrentMaxStackCount; // offset 0x1B38, size 0x4, align 4
    bool m_bHasBonusRange; // offset 0x1B3C, size 0x1, align 1
    char _pad_1B3D[0x3]; // offset 0x1B3D
};
