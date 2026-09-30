#pragma once

class CCitadel_Werewolf_Transformation : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F18]; // offset 0x0
    bool m_bIsTransformed; // offset 0x1F18, size 0x1, align 1
    bool m_bIsTransformingBack; // offset 0x1F19, size 0x1, align 1
    char _pad_1F1A[0x2]; // offset 0x1F1A
    GameTime_t m_tLastRegenComponentThinkTime; // offset 0x1F1C, size 0x4, align 255
    char _pad_1F20[0x4]; // offset 0x1F20
    GameTime_t m_tForceTransformTime; // offset 0x1F24, size 0x4, align 255
    GameTime_t m_flWerewolfStartTime; // offset 0x1F28, size 0x4, align 255
    char _pad_1F2C[0x4]; // offset 0x1F2C
    CCitadelModifier* m_pWerewolfModifier; // offset 0x1F30, size 0x8, align 8
    char _pad_1F38[0x18]; // offset 0x1F38
};
