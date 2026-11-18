#pragma once

class CTriggerFan : public CBaseTrigger /*0x0*/  // sizeof 0xAF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xA30, size 0xC, align 4
    Vector m_vDirection; // offset 0xA3C, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xA48, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xA49, size 0x1, align 1
    char _pad_0A4A[0x6]; // offset 0xA4A
    Quaternion m_qNoiseDelta; // offset 0xA50, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xA60, size 0x4, align 4
    float32 m_flForce; // offset 0xA64, size 0x4, align 4
    bool m_bFalloff; // offset 0xA68, size 0x1, align 1
    char _pad_0A69[0x7]; // offset 0xA69
    CountdownTimer m_RampTimer; // offset 0xA70, size 0x18, align 8
    VectorWS m_vFanOriginWS; // offset 0xA88, size 0xC, align 4
    Vector m_vFanOriginLS; // offset 0xA94, size 0xC, align 4
    Vector m_vFanEndLS; // offset 0xAA0, size 0xC, align 4
    Vector m_vNoiseDirectionTarget; // offset 0xAAC, size 0xC, align 4
    CUtlSymbolLarge m_iszInfoFan; // offset 0xAB8, size 0x8, align 8
    float32 m_flRopeForceScale; // offset 0xAC0, size 0x4, align 4
    float32 m_flParticleForceScale; // offset 0xAC4, size 0x4, align 4
    float32 m_flPlayerForce; // offset 0xAC8, size 0x4, align 4
    bool m_bPlayerWindblock; // offset 0xACC, size 0x1, align 1
    char _pad_0ACD[0x3]; // offset 0xACD
    float32 m_flNPCForce; // offset 0xAD0, size 0x4, align 4
    float32 m_flRampTime; // offset 0xAD4, size 0x4, align 4
    float32 m_fNoiseDegrees; // offset 0xAD8, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0xADC, size 0x4, align 4
    bool m_bPushPlayer; // offset 0xAE0, size 0x1, align 1
    bool m_bRampDown; // offset 0xAE1, size 0x1, align 1
    char _pad_0AE2[0x2]; // offset 0xAE2
    int32 m_nManagerFanIdx; // offset 0xAE4, size 0x4, align 4
    char _pad_0AE8[0x8]; // offset 0xAE8
};
