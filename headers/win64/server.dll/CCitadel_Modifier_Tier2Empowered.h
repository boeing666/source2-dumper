#pragma once

class CCitadel_Modifier_Tier2Empowered : public CCitadel_Modifier_Base /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    int32 m_nStartingHealth; // offset 0x150, size 0x4, align 4
    int32 m_nEndingHealth; // offset 0x154, size 0x4, align 4
    float32 m_flStartingModelScale; // offset 0x158, size 0x4, align 4
    char _pad_015C[0x4]; // offset 0x15C
};
