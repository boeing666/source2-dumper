#pragma once

class CCitadel_Modifier_Doorman_DimishingTimestop : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    float32 m_flSlowPercent; // offset 0xC0, size 0x4, align 4
    float32 m_flDelay; // offset 0xC4, size 0x4, align 4
    bool m_bEscaped; // offset 0xC8, size 0x1, align 1
    char _pad_00C9[0x87]; // offset 0xC9
    bool m_bStunApplied; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x7]; // offset 0x151
};
