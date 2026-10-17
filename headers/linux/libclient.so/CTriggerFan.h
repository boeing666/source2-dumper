#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0xE50, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xDE8]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xDE8, size 0xC, align 4
    Vector m_vDirection; // offset 0xDF4, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xE00, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xE01, size 0x1, align 1
    char _pad_0E02[0xE]; // offset 0xE02
    Quaternion m_qNoiseDelta; // offset 0xE10, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xE20, size 0x4, align 4
    float32 m_flForce; // offset 0xE24, size 0x4, align 4
    bool m_bFalloff; // offset 0xE28, size 0x1, align 1
    char _pad_0E29[0x7]; // offset 0xE29
    CountdownTimer m_RampTimer; // offset 0xE30, size 0x18, align 8
    char _pad_0E48[0x8]; // offset 0xE48
};
