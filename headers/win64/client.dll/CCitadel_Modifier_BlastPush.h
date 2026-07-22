#pragma once

class CCitadel_Modifier_BlastPush : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    Vector m_vPush; // offset 0xC0, size 0xC, align 4
    float32 m_flPushVelocity; // offset 0xCC, size 0x4, align 4
    float32 m_flMaxPushVelocity; // offset 0xD0, size 0x4, align 4
    float32 m_flMaxPushVelocitySqr; // offset 0xD4, size 0x4, align 4
};
