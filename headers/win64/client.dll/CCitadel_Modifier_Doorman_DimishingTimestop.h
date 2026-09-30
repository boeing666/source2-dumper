#pragma once

class CCitadel_Modifier_Doorman_DimishingTimestop : public CCitadelModifier /*0x0*/  // sizeof 0x1F8, align 0xFF [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x130]; // offset 0x0
    float32 m_flSlowPercent; // offset 0x130, size 0x4, align 4
    float32 m_flDelay; // offset 0x134, size 0x4, align 4
    bool m_bEscaped; // offset 0x138, size 0x1, align 1
    char _pad_0139[0xB7]; // offset 0x139
    bool m_bStunApplied; // offset 0x1F0, size 0x1, align 1
    char _pad_01F1[0x7]; // offset 0x1F1
};
