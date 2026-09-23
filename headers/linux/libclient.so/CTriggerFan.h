#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0x1170, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0x1108, size 0xC, align 4
    Vector m_vDirection; // offset 0x1114, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0x1120, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0x1121, size 0x1, align 1
    char _pad_1122[0xE]; // offset 0x1122
    Quaternion m_qNoiseDelta; // offset 0x1130, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0x1140, size 0x4, align 4
    float32 m_flForce; // offset 0x1144, size 0x4, align 4
    bool m_bFalloff; // offset 0x1148, size 0x1, align 1
    char _pad_1149[0x7]; // offset 0x1149
    CountdownTimer m_RampTimer; // offset 0x1150, size 0x18, align 8
    char _pad_1168[0x8]; // offset 0x1168
};
