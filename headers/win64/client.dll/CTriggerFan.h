#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0xD00, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xC98, size 0xC, align 4
    Vector m_vDirection; // offset 0xCA4, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xCB0, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xCB1, size 0x1, align 1
    char _pad_0CB2[0xE]; // offset 0xCB2
    Quaternion m_qNoiseDelta; // offset 0xCC0, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xCD0, size 0x4, align 4
    float32 m_flForce; // offset 0xCD4, size 0x4, align 4
    bool m_bFalloff; // offset 0xCD8, size 0x1, align 1
    char _pad_0CD9[0x7]; // offset 0xCD9
    CountdownTimer m_RampTimer; // offset 0xCE0, size 0x18, align 8
    char _pad_0CF8[0x8]; // offset 0xCF8
};
