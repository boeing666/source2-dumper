#pragma once

class CCitadel_Modifier_Tier2Empowered : public CCitadel_Modifier_Base /*0x0*/  // sizeof 0xE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    int32 m_nStartingHealth; // offset 0xD0, size 0x4, align 4
    int32 m_nEndingHealth; // offset 0xD4, size 0x4, align 4
    float32 m_flStartingModelScale; // offset 0xD8, size 0x4, align 4
    char _pad_00DC[0x4]; // offset 0xDC
};
