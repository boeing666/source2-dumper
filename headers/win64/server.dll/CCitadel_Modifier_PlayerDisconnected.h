#pragma once

class CCitadel_Modifier_PlayerDisconnected : public CCitadelModifier /*0x0*/  // sizeof 0x4A50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    GameTime_t m_flTimePathUpdated; // offset 0x140, size 0x4, align 255
    char _pad_0144[0x490C]; // offset 0x144
};
