#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0xBD0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xB70]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xB70, size 0xC, align 4
    Vector m_vDirection; // offset 0xB7C, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xB88, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xB89, size 0x1, align 1
    char _pad_0B8A[0x6]; // offset 0xB8A
    Quaternion m_qNoiseDelta; // offset 0xB90, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xBA0, size 0x4, align 4
    float32 m_flForce; // offset 0xBA4, size 0x4, align 4
    bool m_bFalloff; // offset 0xBA8, size 0x1, align 1
    char _pad_0BA9[0x7]; // offset 0xBA9
    CountdownTimer m_RampTimer; // offset 0xBB0, size 0x18, align 8
    char _pad_0BC8[0x8]; // offset 0xBC8
};
