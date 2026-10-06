#pragma once

class CCitadel_Modifier_BlastPush : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    Vector m_vPush; // offset 0x148, size 0xC, align 4
    float32 m_flPushVelocity; // offset 0x154, size 0x4, align 4
    float32 m_flMaxPushVelocity; // offset 0x158, size 0x4, align 4
    float32 m_flMaxPushVelocitySqr; // offset 0x15C, size 0x4, align 4
};
