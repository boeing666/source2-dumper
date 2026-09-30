#pragma once

class CTriggerFan : public CBaseTrigger /*0x0*/  // sizeof 0xAB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0x9F0, size 0xC, align 4
    Vector m_vDirection; // offset 0x9FC, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xA08, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xA09, size 0x1, align 1
    char _pad_0A0A[0x6]; // offset 0xA0A
    Quaternion m_qNoiseDelta; // offset 0xA10, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xA20, size 0x4, align 4
    float32 m_flForce; // offset 0xA24, size 0x4, align 4
    bool m_bFalloff; // offset 0xA28, size 0x1, align 1
    char _pad_0A29[0x7]; // offset 0xA29
    CountdownTimer m_RampTimer; // offset 0xA30, size 0x18, align 8
    VectorWS m_vFanOriginWS; // offset 0xA48, size 0xC, align 4
    Vector m_vFanOriginLS; // offset 0xA54, size 0xC, align 4
    Vector m_vFanEndLS; // offset 0xA60, size 0xC, align 4
    Vector m_vNoiseDirectionTarget; // offset 0xA6C, size 0xC, align 4
    CUtlSymbolLarge m_iszInfoFan; // offset 0xA78, size 0x8, align 8
    float32 m_flRopeForceScale; // offset 0xA80, size 0x4, align 4
    float32 m_flParticleForceScale; // offset 0xA84, size 0x4, align 4
    float32 m_flPlayerForce; // offset 0xA88, size 0x4, align 4
    bool m_bPlayerWindblock; // offset 0xA8C, size 0x1, align 1
    char _pad_0A8D[0x3]; // offset 0xA8D
    float32 m_flNPCForce; // offset 0xA90, size 0x4, align 4
    float32 m_flRampTime; // offset 0xA94, size 0x4, align 4
    float32 m_fNoiseDegrees; // offset 0xA98, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0xA9C, size 0x4, align 4
    bool m_bPushPlayer; // offset 0xAA0, size 0x1, align 1
    bool m_bRampDown; // offset 0xAA1, size 0x1, align 1
    char _pad_0AA2[0x2]; // offset 0xAA2
    int32 m_nManagerFanIdx; // offset 0xAA4, size 0x4, align 4
    char _pad_0AA8[0x8]; // offset 0xAA8
};
