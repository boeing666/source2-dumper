#pragma once

class CCitadel_Modifier_Familiar_AttachLaunchOff : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    bool m_bForceApplied; // offset 0x138, size 0x1, align 1
    char _pad_0139[0x3]; // offset 0x139
    Vector m_vTossUpForce; // offset 0x13C, size 0xC, align 4
    float32 m_flCurrentVelocityScale; // offset 0x148, size 0x4, align 4
    char _pad_014C[0x4]; // offset 0x14C
};
