#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0x1100, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0x1098, size 0xC, align 4
    Vector m_vDirection; // offset 0x10A4, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0x10B0, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0x10B1, size 0x1, align 1
    char _pad_10B2[0xE]; // offset 0x10B2
    Quaternion m_qNoiseDelta; // offset 0x10C0, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0x10D0, size 0x4, align 4
    float32 m_flForce; // offset 0x10D4, size 0x4, align 4
    bool m_bFalloff; // offset 0x10D8, size 0x1, align 1
    char _pad_10D9[0x7]; // offset 0x10D9
    CountdownTimer m_RampTimer; // offset 0x10E0, size 0x18, align 8
    char _pad_10F8[0x8]; // offset 0x10F8
};
