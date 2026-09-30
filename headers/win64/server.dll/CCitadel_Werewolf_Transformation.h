#pragma once

class CCitadel_Werewolf_Transformation : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1CE0]; // offset 0x0
    bool m_bIsTransformed; // offset 0x1CE0, size 0x1, align 1
    bool m_bIsTransformingBack; // offset 0x1CE1, size 0x1, align 1
    char _pad_1CE2[0x2]; // offset 0x1CE2
    GameTime_t m_tLastRegenComponentThinkTime; // offset 0x1CE4, size 0x4, align 255
    char _pad_1CE8[0x4]; // offset 0x1CE8
    GameTime_t m_tForceTransformTime; // offset 0x1CEC, size 0x4, align 255
    GameTime_t m_flWerewolfStartTime; // offset 0x1CF0, size 0x4, align 255
    char _pad_1CF4[0x4]; // offset 0x1CF4
    CCitadelModifier* m_pWerewolfModifier; // offset 0x1CF8, size 0x8, align 8
    char _pad_1D00[0x18]; // offset 0x1D00
};
