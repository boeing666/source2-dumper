#pragma once

class CCitadel_Modifier_VandalOverflow : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x2C0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2A8]; // offset 0x0
    VectorWS m_vecFloatDest; // offset 0x2A8, size 0xC, align 4
    VectorWS m_vecStartingPos; // offset 0x2B4, size 0xC, align 4
};
