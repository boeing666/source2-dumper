#pragma once

class CCitadel_Werewolf_Transformation : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1CE8]; // offset 0x0
    bool m_bIsTransformed; // offset 0x1CE8, size 0x1, align 1
    bool m_bIsTransformingBack; // offset 0x1CE9, size 0x1, align 1
    char _pad_1CEA[0x2]; // offset 0x1CEA
    GameTime_t m_tLastRegenComponentThinkTime; // offset 0x1CEC, size 0x4, align 255
    char _pad_1CF0[0x4]; // offset 0x1CF0
    GameTime_t m_tForceTransformTime; // offset 0x1CF4, size 0x4, align 255
    GameTime_t m_flWerewolfStartTime; // offset 0x1CF8, size 0x4, align 255
    char _pad_1CFC[0x4]; // offset 0x1CFC
    CCitadelModifier* m_pWerewolfModifier; // offset 0x1D00, size 0x8, align 8
    char _pad_1D08[0x18]; // offset 0x1D08
};
