#pragma once

class CCitadel_Modifier_Baba_Hex : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    GameTime_t m_flLastHoverImpulseTime; // offset 0x150, size 0x4, align 255
    GameTime_t m_flLastJumpTime; // offset 0x154, size 0x4, align 255
    GameTime_t m_flHexStartTime; // offset 0x158, size 0x4, align 255
    char _pad_015C[0x4]; // offset 0x15C
};
