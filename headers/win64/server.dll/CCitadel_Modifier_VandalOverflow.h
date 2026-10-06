#pragma once

class CCitadel_Modifier_VandalOverflow : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x2C8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2B0]; // offset 0x0
    VectorWS m_vecFloatDest; // offset 0x2B0, size 0xC, align 4
    VectorWS m_vecStartingPos; // offset 0x2BC, size 0xC, align 4
};
