#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0x11E0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0x1180, size 0xC, align 4
    Vector m_vDirection; // offset 0x118C, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0x1198, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0x1199, size 0x1, align 1
    char _pad_119A[0x6]; // offset 0x119A
    Quaternion m_qNoiseDelta; // offset 0x11A0, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0x11B0, size 0x4, align 4
    float32 m_flForce; // offset 0x11B4, size 0x4, align 4
    bool m_bFalloff; // offset 0x11B8, size 0x1, align 1
    char _pad_11B9[0x7]; // offset 0x11B9
    CountdownTimer m_RampTimer; // offset 0x11C0, size 0x18, align 8
    char _pad_11D8[0x8]; // offset 0x11D8
};
