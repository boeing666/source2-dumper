#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0x1080, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0x1020, size 0xC, align 4
    Vector m_vDirection; // offset 0x102C, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0x1038, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0x1039, size 0x1, align 1
    char _pad_103A[0x6]; // offset 0x103A
    Quaternion m_qNoiseDelta; // offset 0x1040, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0x1050, size 0x4, align 4
    float32 m_flForce; // offset 0x1054, size 0x4, align 4
    bool m_bFalloff; // offset 0x1058, size 0x1, align 1
    char _pad_1059[0x7]; // offset 0x1059
    CountdownTimer m_RampTimer; // offset 0x1060, size 0x18, align 8
    char _pad_1078[0x8]; // offset 0x1078
};
