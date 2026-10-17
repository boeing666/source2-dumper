#pragma once

class CDOTA_Modifier_Roshan_Grab_Thrown : public CDOTA_Modifier_Knockback /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AE0]; // offset 0x0
    float32 m_flDamage; // offset 0x1AE0, size 0x4, align 4
    QAngle m_vStartAngle; // offset 0x1AE4, size 0xC, align 4
    QAngle m_vEndAngle; // offset 0x1AF0, size 0xC, align 4
    float32 m_flAngleAnimDuration; // offset 0x1AFC, size 0x4, align 4
};
