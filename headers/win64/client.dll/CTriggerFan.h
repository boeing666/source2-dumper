#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0xCC0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC60]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xC60, size 0xC, align 4
    Vector m_vDirection; // offset 0xC6C, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xC78, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xC79, size 0x1, align 1
    char _pad_0C7A[0x6]; // offset 0xC7A
    Quaternion m_qNoiseDelta; // offset 0xC80, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xC90, size 0x4, align 4
    float32 m_flForce; // offset 0xC94, size 0x4, align 4
    bool m_bFalloff; // offset 0xC98, size 0x1, align 1
    char _pad_0C99[0x7]; // offset 0xC99
    CountdownTimer m_RampTimer; // offset 0xCA0, size 0x18, align 8
    char _pad_0CB8[0x8]; // offset 0xCB8
};
