#pragma once

class CCitadel_Modifier_Doorman_DimishingTimestop : public CCitadelModifier /*0x0*/  // sizeof 0x208, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x140]; // offset 0x0
    float32 m_flSlowPercent; // offset 0x140, size 0x4, align 4
    float32 m_flDelay; // offset 0x144, size 0x4, align 4
    bool m_bEscaped; // offset 0x148, size 0x1, align 1
    char _pad_0149[0xB7]; // offset 0x149
    bool m_bStunApplied; // offset 0x200, size 0x1, align 1
    char _pad_0201[0x7]; // offset 0x201
};
