#pragma once

class CCitadel_Modifier_VandalSurge : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x2B8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2A0]; // offset 0x0
    VectorWS m_vecFloatDest; // offset 0x2A0, size 0xC, align 4
    VectorWS m_vecStartingPos; // offset 0x2AC, size 0xC, align 4
};
