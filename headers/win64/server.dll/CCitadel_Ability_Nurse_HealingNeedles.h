#pragma once

class CCitadel_Ability_Nurse_HealingNeedles : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2338, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2318]; // offset 0x0
    float32 m_flChargeProgress; // offset 0x2318, size 0x4, align 4
    bool m_bNeedlesOut; // offset 0x231C, size 0x1, align 1
    char _pad_231D[0x3]; // offset 0x231D
    GameTime_t m_tSwapInFinishTime; // offset 0x2320, size 0x4, align 255
    char _pad_2324[0xC]; // offset 0x2324
    CHandle< CCitadelBaseAbility > m_hOriginalGun; // offset 0x2330, size 0x4, align 4
    char _pad_2334[0x4]; // offset 0x2334
};
