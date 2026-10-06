#pragma once

class CCitadel_Modifier_AccuracyTracker : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x160]; // offset 0x0
    float32 m_flInterval; // offset 0x160, size 0x4, align 4
    float32 m_flProgress; // offset 0x164, size 0x4, align 4
};
