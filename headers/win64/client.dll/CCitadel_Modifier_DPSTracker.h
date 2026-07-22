#pragma once

class CCitadel_Modifier_DPSTracker : public CCitadelModifier /*0x0*/  // sizeof 0xC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    float32 m_flProgress; // offset 0xC0, size 0x4, align 4
    float32 m_flDistToTarget; // offset 0xC4, size 0x4, align 4
};
