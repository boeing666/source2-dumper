#pragma once

class CCitadel_Modifier_VandalSurge : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x1F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    Vector m_vecFloatDest; // offset 0x1D8, size 0xC, align 4
    Vector m_vecStartingPos; // offset 0x1E4, size 0xC, align 4
};
