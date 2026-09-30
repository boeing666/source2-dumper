#pragma once

class CCitadel_Modifier_BlastPush : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    Vector m_vPush; // offset 0x130, size 0xC, align 4
    float32 m_flPushVelocity; // offset 0x13C, size 0x4, align 4
    float32 m_flMaxPushVelocity; // offset 0x140, size 0x4, align 4
    float32 m_flMaxPushVelocitySqr; // offset 0x144, size 0x4, align 4
};
