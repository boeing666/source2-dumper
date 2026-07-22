#pragma once

class CTriggerFan : public C_BaseTrigger /*0x0*/  // sizeof 0xAE0, align 0x10 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xA78, size 0xC, align 4 | MNetworkEnable
    Vector m_vDirection; // offset 0xA84, size 0xC, align 4 | MNetworkEnable
    bool m_bPushTowardsInfoTarget; // offset 0xA90, size 0x1, align 1 | MNetworkEnable
    bool m_bPushAwayFromInfoTarget; // offset 0xA91, size 0x1, align 1 | MNetworkEnable
    char _pad_0A92[0xE]; // offset 0xA92
    Quaternion m_qNoiseDelta; // offset 0xAA0, size 0x10, align 16 | MNetworkEnable
    CHandle< CInfoFan > m_hInfoFan; // offset 0xAB0, size 0x4, align 4 | MNetworkEnable
    float32 m_flForce; // offset 0xAB4, size 0x4, align 4 | MNetworkEnable
    bool m_bFalloff; // offset 0xAB8, size 0x1, align 1 | MNetworkEnable
    char _pad_0AB9[0x7]; // offset 0xAB9
    CountdownTimer m_RampTimer; // offset 0xAC0, size 0x18, align 255 | MNetworkEnable
    char _pad_0AD8[0x8]; // offset 0xAD8
};
