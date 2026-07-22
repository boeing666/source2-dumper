#pragma once

class CCSPlayerLegacyJump  // sizeof 0x18, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    bool m_bOldJumpPressed; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    float32 m_flJumpPressedTime; // offset 0x14, size 0x4, align 4
};
