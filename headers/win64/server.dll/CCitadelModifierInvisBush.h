#pragma once

class CCitadelModifierInvisBush : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x140]; // offset 0x0
    float32 m_flCurrentObscureLevel; // offset 0x140, size 0x4, align 4
    float32 m_flCurrentInvisLevel; // offset 0x144, size 0x4, align 4
    GameTime_t m_FadeStartTime; // offset 0x148, size 0x4, align 255
    bool m_bRevealing; // offset 0x14C, size 0x1, align 1
    char _pad_014D[0x3]; // offset 0x14D
    float32 m_flRevealStartLevel; // offset 0x150, size 0x4, align 4
    float32 m_flRevealFadeDuration; // offset 0x154, size 0x4, align 4
};
