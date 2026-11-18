#pragma once

class CTriggerFan : public CBaseTrigger /*0x0*/  // sizeof 0xDD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD0C]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xD0C, size 0xC, align 4
    Vector m_vDirection; // offset 0xD18, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xD24, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xD25, size 0x1, align 1
    char _pad_0D26[0xA]; // offset 0xD26
    Quaternion m_qNoiseDelta; // offset 0xD30, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xD40, size 0x4, align 4
    float32 m_flForce; // offset 0xD44, size 0x4, align 4
    bool m_bFalloff; // offset 0xD48, size 0x1, align 1
    char _pad_0D49[0x7]; // offset 0xD49
    CountdownTimer m_RampTimer; // offset 0xD50, size 0x18, align 8
    VectorWS m_vFanOriginWS; // offset 0xD68, size 0xC, align 4
    Vector m_vFanOriginLS; // offset 0xD74, size 0xC, align 4
    Vector m_vFanEndLS; // offset 0xD80, size 0xC, align 4
    Vector m_vNoiseDirectionTarget; // offset 0xD8C, size 0xC, align 4
    CUtlSymbolLarge m_iszInfoFan; // offset 0xD98, size 0x8, align 8
    float32 m_flRopeForceScale; // offset 0xDA0, size 0x4, align 4
    float32 m_flParticleForceScale; // offset 0xDA4, size 0x4, align 4
    float32 m_flPlayerForce; // offset 0xDA8, size 0x4, align 4
    bool m_bPlayerWindblock; // offset 0xDAC, size 0x1, align 1
    char _pad_0DAD[0x3]; // offset 0xDAD
    float32 m_flNPCForce; // offset 0xDB0, size 0x4, align 4
    float32 m_flRampTime; // offset 0xDB4, size 0x4, align 4
    float32 m_fNoiseDegrees; // offset 0xDB8, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0xDBC, size 0x4, align 4
    bool m_bPushPlayer; // offset 0xDC0, size 0x1, align 1
    bool m_bRampDown; // offset 0xDC1, size 0x1, align 1
    char _pad_0DC2[0x2]; // offset 0xDC2
    int32 m_nManagerFanIdx; // offset 0xDC4, size 0x4, align 4
    char _pad_0DC8[0x8]; // offset 0xDC8
};
