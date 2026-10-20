#pragma once

class CCitadel_Werewolf_Transformation : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F20]; // offset 0x0
    bool m_bIsTransformed; // offset 0x1F20, size 0x1, align 1
    bool m_bIsTransformingBack; // offset 0x1F21, size 0x1, align 1
    char _pad_1F22[0x2]; // offset 0x1F22
    GameTime_t m_tLastRegenComponentThinkTime; // offset 0x1F24, size 0x4, align 255
    char _pad_1F28[0x4]; // offset 0x1F28
    GameTime_t m_tForceTransformTime; // offset 0x1F2C, size 0x4, align 255
    GameTime_t m_flWerewolfStartTime; // offset 0x1F30, size 0x4, align 255
    char _pad_1F34[0x4]; // offset 0x1F34
    CCitadelModifier* m_pWerewolfModifier; // offset 0x1F38, size 0x8, align 8
    char _pad_1F40[0x18]; // offset 0x1F40
};
