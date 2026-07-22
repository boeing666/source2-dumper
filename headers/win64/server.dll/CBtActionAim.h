#pragma once

class CBtActionAim : public CBtNode /*0x0*/  // sizeof 0xF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CUtlString m_szSensorInputKey; // offset 0x68, size 0x8, align 8
    char _pad_0070[0x10]; // offset 0x70
    CUtlString m_szAimReadyKey; // offset 0x80, size 0x8, align 8
    float32 m_flZoomCooldownTimestamp; // offset 0x88, size 0x4, align 4
    bool m_bDoneAiming; // offset 0x8C, size 0x1, align 1
    char _pad_008D[0x3]; // offset 0x8D
    float32 m_flLerpStartTime; // offset 0x90, size 0x4, align 4
    float32 m_flNextLookTargetLerpTime; // offset 0x94, size 0x4, align 4
    float32 m_flPenaltyReductionRatio; // offset 0x98, size 0x4, align 4
    QAngle m_NextLookTarget; // offset 0x9C, size 0xC, align 4
    CountdownTimer m_AimTimer; // offset 0xA8, size 0x18, align 8
    CountdownTimer m_SniperHoldTimer; // offset 0xC0, size 0x18, align 8
    CountdownTimer m_FocusIntervalTimer; // offset 0xD8, size 0x18, align 8
    bool m_bAcquired; // offset 0xF0, size 0x1, align 1
    char _pad_00F1[0x7]; // offset 0xF1
};
