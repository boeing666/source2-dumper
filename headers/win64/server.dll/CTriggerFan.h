#pragma once

class CTriggerFan : public CBaseTrigger /*0x0*/  // sizeof 0x9B0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0x8E8, size 0xC, align 4
    Vector m_vDirection; // offset 0x8F4, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0x900, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0x901, size 0x1, align 1
    char _pad_0902[0xE]; // offset 0x902
    Quaternion m_qNoiseDelta; // offset 0x910, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0x920, size 0x4, align 4
    float32 m_flForce; // offset 0x924, size 0x4, align 4
    bool m_bFalloff; // offset 0x928, size 0x1, align 1
    char _pad_0929[0x7]; // offset 0x929
    CountdownTimer m_RampTimer; // offset 0x930, size 0x18, align 8
    VectorWS m_vFanOriginWS; // offset 0x948, size 0xC, align 4
    Vector m_vFanOriginLS; // offset 0x954, size 0xC, align 4
    Vector m_vFanEndLS; // offset 0x960, size 0xC, align 4
    Vector m_vNoiseDirectionTarget; // offset 0x96C, size 0xC, align 4
    CUtlSymbolLarge m_iszInfoFan; // offset 0x978, size 0x8, align 8
    float32 m_flRopeForceScale; // offset 0x980, size 0x4, align 4
    float32 m_flParticleForceScale; // offset 0x984, size 0x4, align 4
    float32 m_flPlayerForce; // offset 0x988, size 0x4, align 4
    bool m_bPlayerWindblock; // offset 0x98C, size 0x1, align 1
    char _pad_098D[0x3]; // offset 0x98D
    float32 m_flNPCForce; // offset 0x990, size 0x4, align 4
    float32 m_flRampTime; // offset 0x994, size 0x4, align 4
    float32 m_fNoiseDegrees; // offset 0x998, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0x99C, size 0x4, align 4
    bool m_bPushPlayer; // offset 0x9A0, size 0x1, align 1
    bool m_bRampDown; // offset 0x9A1, size 0x1, align 1
    char _pad_09A2[0x2]; // offset 0x9A2
    int32 m_nManagerFanIdx; // offset 0x9A4, size 0x4, align 4
    char _pad_09A8[0x8]; // offset 0x9A8
};
