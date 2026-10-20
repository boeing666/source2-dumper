#pragma once

class CCitadel_Ability_Nurse_HealingNeedles : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2570, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x2550]; // offset 0x0
    float32 m_flChargeProgress; // offset 0x2550, size 0x4, align 4
    bool m_bNeedlesOut; // offset 0x2554, size 0x1, align 1
    char _pad_2555[0x3]; // offset 0x2555
    GameTime_t m_tSwapInFinishTime; // offset 0x2558, size 0x4, align 255
    char _pad_255C[0xC]; // offset 0x255C
    CHandle< C_CitadelBaseAbility > m_hOriginalGun; // offset 0x2568, size 0x4, align 4
    char _pad_256C[0x4]; // offset 0x256C
};
