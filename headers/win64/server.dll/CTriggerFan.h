#pragma once

class CTriggerFan : public CBaseTrigger /*0x0*/  // sizeof 0x9A0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    Vector m_vFanOriginOffset; // offset 0x8E0, size 0xC, align 4 | MNetworkEnable
    Vector m_vDirection; // offset 0x8EC, size 0xC, align 4 | MNetworkEnable
    bool m_bPushTowardsInfoTarget; // offset 0x8F8, size 0x1, align 1 | MNetworkEnable
    bool m_bPushAwayFromInfoTarget; // offset 0x8F9, size 0x1, align 1 | MNetworkEnable
    char _pad_08FA[0x6]; // offset 0x8FA
    Quaternion m_qNoiseDelta; // offset 0x900, size 0x10, align 16 | MNetworkEnable
    CHandle< CInfoFan > m_hInfoFan; // offset 0x910, size 0x4, align 4 | MNetworkEnable
    float32 m_flForce; // offset 0x914, size 0x4, align 4 | MNetworkEnable
    bool m_bFalloff; // offset 0x918, size 0x1, align 1 | MNetworkEnable
    char _pad_0919[0x7]; // offset 0x919
    CountdownTimer m_RampTimer; // offset 0x920, size 0x18, align 255 | MNetworkEnable
    VectorWS m_vFanOriginWS; // offset 0x938, size 0xC, align 4
    Vector m_vFanOriginLS; // offset 0x944, size 0xC, align 4
    Vector m_vFanEndLS; // offset 0x950, size 0xC, align 4
    Vector m_vNoiseDirectionTarget; // offset 0x95C, size 0xC, align 4
    CUtlSymbolLarge m_iszInfoFan; // offset 0x968, size 0x8, align 8
    float32 m_flRopeForceScale; // offset 0x970, size 0x4, align 4
    float32 m_flParticleForceScale; // offset 0x974, size 0x4, align 4
    float32 m_flPlayerForce; // offset 0x978, size 0x4, align 4
    bool m_bPlayerWindblock; // offset 0x97C, size 0x1, align 1
    char _pad_097D[0x3]; // offset 0x97D
    float32 m_flNPCForce; // offset 0x980, size 0x4, align 4
    float32 m_flRampTime; // offset 0x984, size 0x4, align 4
    float32 m_fNoiseDegrees; // offset 0x988, size 0x4, align 4
    float32 m_fNoiseSpeed; // offset 0x98C, size 0x4, align 4
    bool m_bPushPlayer; // offset 0x990, size 0x1, align 1
    bool m_bRampDown; // offset 0x991, size 0x1, align 1
    char _pad_0992[0x2]; // offset 0x992
    int32 m_nManagerFanIdx; // offset 0x994, size 0x4, align 4
    char _pad_0998[0x8]; // offset 0x998
};
