#pragma once

class CCitadel_Modifier_DPSTracker : public CCitadelModifier /*0x0*/  // sizeof 0x178, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x168]; // offset 0x0
    float32 m_flInterval; // offset 0x168, size 0x4, align 4
    float32 m_flProgress; // offset 0x16C, size 0x4, align 4
    float32 m_flDistToTarget; // offset 0x170, size 0x4, align 4
    char _pad_0174[0x4]; // offset 0x174
};
