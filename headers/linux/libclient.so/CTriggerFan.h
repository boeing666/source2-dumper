#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0xD60, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xCF8]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xCF8, size 0xC, align 4
    Vector m_vDirection; // offset 0xD04, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xD10, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xD11, size 0x1, align 1
    char _pad_0D12[0xE]; // offset 0xD12
    Quaternion m_qNoiseDelta; // offset 0xD20, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xD30, size 0x4, align 4
    float32 m_flForce; // offset 0xD34, size 0x4, align 4
    bool m_bFalloff; // offset 0xD38, size 0x1, align 1
    char _pad_0D39[0x7]; // offset 0xD39
    CountdownTimer m_RampTimer; // offset 0xD40, size 0x18, align 8
    char _pad_0D58[0x8]; // offset 0xD58
};
