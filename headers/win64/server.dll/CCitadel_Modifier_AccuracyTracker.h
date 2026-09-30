#pragma once

class CCitadel_Modifier_AccuracyTracker : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x158]; // offset 0x0
    float32 m_flInterval; // offset 0x158, size 0x4, align 4
    float32 m_flProgress; // offset 0x15C, size 0x4, align 4
};
