#pragma once

class CTriggerFan : public CBaseTrigger /*0x0*/  // sizeof 0xC80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBC4]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xBC4, size 0xC, align 4
    Vector m_vDirection; // offset 0xBD0, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xBDC, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xBDD, size 0x1, align 1
    char _pad_0BDE[0x2]; // offset 0xBDE
    Quaternion m_qNoiseDelta; // offset 0xBE0, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xBF0, size 0x4, align 4
    float32 m_flForce; // offset 0xBF4, size 0x4, align 4
    bool m_bFalloff; // offset 0xBF8, size 0x1, align 1
    char _pad_0BF9[0x7]; // offset 0xBF9
    CountdownTimer m_RampTimer; // offset 0xC00, size 0x18, align 8
    VectorWS m_vFanOriginWS; // offset 0xC18, size 0xC, align 4
    Vector m_vFanOriginLS; // offset 0xC24, size 0xC, align 4
    Vector m_vFanEndLS; // offset 0xC30, size 0xC, align 4
    Vector m_vNoiseDirectionTarget; // offset 0xC3C, size 0xC, align 4
    CUtlSymbolLarge m_iszInfoFan; // offset 0xC48, size 0x8, align 8
    float32 m_flRopeForceScale; // offset 0xC50, size 0x4, align 4
    float32 m_flParticleForceScale; // offset 0xC54, size 0x4, align 4
    float32 m_flPlayerForce; // offset 0xC58, size 0x4, align 4
    bool m_bPlayerWindblock; // offset 0xC5C, size 0x1, align 1
    char _pad_0C5D[0x3]; // offset 0xC5D
    float32 m_flNPCForce; // offset 0xC60, size 0x4, align 4
    float32 m_flRampTime; // offset 0xC64, size 0x4, align 4
    float32 m_fNoiseDegrees; // offset 0xC68, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0xC6C, size 0x4, align 4
    bool m_bPushPlayer; // offset 0xC70, size 0x1, align 1
    bool m_bRampDown; // offset 0xC71, size 0x1, align 1
    char _pad_0C72[0x2]; // offset 0xC72
    int32 m_nManagerFanIdx; // offset 0xC74, size 0x4, align 4
    char _pad_0C78[0x8]; // offset 0xC78
};
