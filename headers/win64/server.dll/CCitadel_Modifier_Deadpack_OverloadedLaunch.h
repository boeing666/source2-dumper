#pragma once

class CCitadel_Modifier_Deadpack_OverloadedLaunch : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    bool m_bForceApplied; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x3]; // offset 0x151
    Vector m_vTossUpForce; // offset 0x154, size 0xC, align 4
    float32 m_flCurrentVelocityScale; // offset 0x160, size 0x4, align 4
    char _pad_0164[0x4]; // offset 0x164
};
