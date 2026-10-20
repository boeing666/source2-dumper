#pragma once

class CCitadelModifierInvisBush : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x150]; // offset 0x0
    float32 m_flCurrentObscureLevel; // offset 0x150, size 0x4, align 4
    float32 m_flCurrentInvisLevel; // offset 0x154, size 0x4, align 4
    GameTime_t m_FadeStartTime; // offset 0x158, size 0x4, align 255
    bool m_bRevealing; // offset 0x15C, size 0x1, align 1
    char _pad_015D[0x3]; // offset 0x15D
    float32 m_flRevealStartLevel; // offset 0x160, size 0x4, align 4
    float32 m_flRevealFadeDuration; // offset 0x164, size 0x4, align 4
};
