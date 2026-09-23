#pragma once

class CTriggerFan : public CBaseTrigger /*0x0*/  // sizeof 0xD60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC9C]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0xC9C, size 0xC, align 4
    Vector m_vDirection; // offset 0xCA8, size 0xC, align 4
    bool m_bPushTowardsInfoTarget; // offset 0xCB4, size 0x1, align 1
    bool m_bPushAwayFromInfoTarget; // offset 0xCB5, size 0x1, align 1
    char _pad_0CB6[0xA]; // offset 0xCB6
    Quaternion m_qNoiseDelta; // offset 0xCC0, size 0x10, align 16
    CHandle< CInfoFan > m_hInfoFan; // offset 0xCD0, size 0x4, align 4
    float32 m_flForce; // offset 0xCD4, size 0x4, align 4
    bool m_bFalloff; // offset 0xCD8, size 0x1, align 1
    char _pad_0CD9[0x7]; // offset 0xCD9
    CountdownTimer m_RampTimer; // offset 0xCE0, size 0x18, align 8
    VectorWS m_vFanOriginWS; // offset 0xCF8, size 0xC, align 4
    Vector m_vFanOriginLS; // offset 0xD04, size 0xC, align 4
    Vector m_vFanEndLS; // offset 0xD10, size 0xC, align 4
    Vector m_vNoiseDirectionTarget; // offset 0xD1C, size 0xC, align 4
    CUtlSymbolLarge m_iszInfoFan; // offset 0xD28, size 0x8, align 8
    float32 m_flRopeForceScale; // offset 0xD30, size 0x4, align 4
    float32 m_flParticleForceScale; // offset 0xD34, size 0x4, align 4
    float32 m_flPlayerForce; // offset 0xD38, size 0x4, align 4
    bool m_bPlayerWindblock; // offset 0xD3C, size 0x1, align 1
    char _pad_0D3D[0x3]; // offset 0xD3D
    float32 m_flNPCForce; // offset 0xD40, size 0x4, align 4
    float32 m_flRampTime; // offset 0xD44, size 0x4, align 4
    float32 m_fNoiseDegrees; // offset 0xD48, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0xD4C, size 0x4, align 4
    bool m_bPushPlayer; // offset 0xD50, size 0x1, align 1
    bool m_bRampDown; // offset 0xD51, size 0x1, align 1
    char _pad_0D52[0x2]; // offset 0xD52
    int32 m_nManagerFanIdx; // offset 0xD54, size 0x4, align 4
    char _pad_0D58[0x8]; // offset 0xD58
};
