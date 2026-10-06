#pragma once

class CCitadelModifierInvisBush : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x138]; // offset 0x0
    float32 m_flCurrentObscureLevel; // offset 0x138, size 0x4, align 4
    float32 m_flCurrentInvisLevel; // offset 0x13C, size 0x4, align 4
    GameTime_t m_FadeStartTime; // offset 0x140, size 0x4, align 255
    bool m_bRevealing; // offset 0x144, size 0x1, align 1
    char _pad_0145[0x3]; // offset 0x145
    float32 m_flRevealStartLevel; // offset 0x148, size 0x4, align 4
    float32 m_flRevealFadeDuration; // offset 0x14C, size 0x4, align 4
};
