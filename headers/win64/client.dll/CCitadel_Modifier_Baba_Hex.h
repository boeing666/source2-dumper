#pragma once

class CCitadel_Modifier_Baba_Hex : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    GameTime_t m_flLastHoverImpulseTime; // offset 0x140, size 0x4, align 255
    GameTime_t m_flLastJumpTime; // offset 0x144, size 0x4, align 255
    GameTime_t m_flHexStartTime; // offset 0x148, size 0x4, align 255
    char _pad_014C[0x4]; // offset 0x14C
};
