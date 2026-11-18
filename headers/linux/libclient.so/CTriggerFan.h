#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0xEB0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE50]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xE50, size 0xC, align 4
    Vector m_vDirection; // offset 0xE5C, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xE68, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xE69, size 0x1, align 1
    char _pad_0E6A[0x6]; // offset 0xE6A
    Quaternion m_qNoiseDelta; // offset 0xE70, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xE80, size 0x4, align 4
    float32 m_flForce; // offset 0xE84, size 0x4, align 4
    bool m_bFalloff; // offset 0xE88, size 0x1, align 1
    char _pad_0E89[0x7]; // offset 0xE89
    CountdownTimer m_RampTimer; // offset 0xE90, size 0x18, align 8
    char _pad_0EA8[0x8]; // offset 0xEA8
};
