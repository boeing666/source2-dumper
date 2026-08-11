#pragma once

class CCitadel_Modifier_Doorman_DimishingTimestop : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    float32 m_flSlowPercent; // offset 0xD0, size 0x4, align 4
    float32 m_flDelay; // offset 0xD4, size 0x4, align 4
    bool m_bEscaped; // offset 0xD8, size 0x1, align 1
    char _pad_00D9[0x87]; // offset 0xD9
    bool m_bStunApplied; // offset 0x160, size 0x1, align 1
    char _pad_0161[0x7]; // offset 0x161
};
