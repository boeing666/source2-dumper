#pragma once

class CDOTA_Modifier_Roshan_Grab_Thrown : public CDOTA_Modifier_Knockback /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AB0]; // offset 0x0
    QAngle m_vStartAngle; // offset 0x1AB0, size 0xC, align 4
    QAngle m_vEndAngle; // offset 0x1ABC, size 0xC, align 4
    float32 m_flAngleAnimDuration; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
