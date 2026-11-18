#pragma once

class CDOTA_Modifier_Roshan_Grab_Thrown : public CDOTA_Modifier_Knockback /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B30]; // offset 0x0
    QAngle m_vStartAngle; // offset 0x1B30, size 0xC, align 4
    QAngle m_vEndAngle; // offset 0x1B3C, size 0xC, align 4
    float32 m_flAngleAnimDuration; // offset 0x1B48, size 0x4, align 4
    char _pad_1B4C[0x4]; // offset 0x1B4C
};
