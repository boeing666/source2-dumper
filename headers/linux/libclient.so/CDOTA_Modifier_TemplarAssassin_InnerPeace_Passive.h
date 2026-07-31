#pragma once

class CDOTA_Modifier_TemplarAssassin_InnerPeace_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_fElapsedTime; // offset 0x1A78, size 0x4, align 4
    float32 max_attack_range; // offset 0x1A7C, size 0x4, align 4
    float32 max_hp_regen; // offset 0x1A80, size 0x4, align 4
    float32 max_mana_regen; // offset 0x1A84, size 0x4, align 4
    float32 time_until_meditation; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CountdownTimer m_StartMeditationTimer; // offset 0x1A90, size 0x18, align 8
    float32 m_fElapsedMeditationTime; // offset 0x1AA8, size 0x4, align 4
    float32 m_fElapsedLingerTime; // offset 0x1AAC, size 0x4, align 4
    float32 time_until_max_bonus; // offset 0x1AB0, size 0x4, align 4
    float32 bonus_linger_time; // offset 0x1AB4, size 0x4, align 4
    int32 m_nCurrentMaxStackCount; // offset 0x1AB8, size 0x4, align 4
    bool m_bHasBonusRange; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
};
