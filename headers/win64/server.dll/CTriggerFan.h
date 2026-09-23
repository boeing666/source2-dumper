#pragma once

class CTriggerFan : public CBaseTrigger /*0x0*/  // sizeof 0xA90, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x9C8]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0x9C8, size 0xC, align 4
    Vector m_vDirection; // offset 0x9D4, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0x9E0, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0x9E1, size 0x1, align 1
    char _pad_09E2[0xE]; // offset 0x9E2
    Quaternion m_qNoiseDelta; // offset 0x9F0, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xA00, size 0x4, align 4
    float32 m_flForce; // offset 0xA04, size 0x4, align 4
    bool m_bFalloff; // offset 0xA08, size 0x1, align 1
    char _pad_0A09[0x7]; // offset 0xA09
    CountdownTimer m_RampTimer; // offset 0xA10, size 0x18, align 8
    VectorWS m_vFanOriginWS; // offset 0xA28, size 0xC, align 4
    Vector m_vFanOriginLS; // offset 0xA34, size 0xC, align 4
    Vector m_vFanEndLS; // offset 0xA40, size 0xC, align 4
    Vector m_vNoiseDirectionTarget; // offset 0xA4C, size 0xC, align 4
    CUtlSymbolLarge m_iszInfoFan; // offset 0xA58, size 0x8, align 8
    float32 m_flRopeForceScale; // offset 0xA60, size 0x4, align 4
    float32 m_flParticleForceScale; // offset 0xA64, size 0x4, align 4
    float32 m_flPlayerForce; // offset 0xA68, size 0x4, align 4
    bool m_bPlayerWindblock; // offset 0xA6C, size 0x1, align 1
    char _pad_0A6D[0x3]; // offset 0xA6D
    float32 m_flNPCForce; // offset 0xA70, size 0x4, align 4
    float32 m_flRampTime; // offset 0xA74, size 0x4, align 4
    float32 m_fNoiseDegrees; // offset 0xA78, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0xA7C, size 0x4, align 4
    bool m_bPushPlayer; // offset 0xA80, size 0x1, align 1
    bool m_bRampDown; // offset 0xA81, size 0x1, align 1
    char _pad_0A82[0x2]; // offset 0xA82
    int32 m_nManagerFanIdx; // offset 0xA84, size 0x4, align 4
    char _pad_0A88[0x8]; // offset 0xA88
};
