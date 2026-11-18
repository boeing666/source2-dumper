#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0xD20, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xCC0]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xCC0, size 0xC, align 4
    Vector m_vDirection; // offset 0xCCC, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xCD8, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xCD9, size 0x1, align 1
    char _pad_0CDA[0x6]; // offset 0xCDA
    Quaternion m_qNoiseDelta; // offset 0xCE0, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xCF0, size 0x4, align 4
    float32 m_flForce; // offset 0xCF4, size 0x4, align 4
    bool m_bFalloff; // offset 0xCF8, size 0x1, align 1
    char _pad_0CF9[0x7]; // offset 0xCF9
    CountdownTimer m_RampTimer; // offset 0xD00, size 0x18, align 8
    char _pad_0D18[0x8]; // offset 0xD18
};
