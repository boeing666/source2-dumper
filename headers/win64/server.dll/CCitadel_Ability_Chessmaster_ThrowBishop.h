#pragma once

class CCitadel_Ability_Chessmaster_ThrowBishop : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1EC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecDeployedPieces; // offset 0x14A0, size 0x18, align 8
    bool m_bActive; // offset 0x14B8, size 0x1, align 1
    char _pad_14B9[0x3]; // offset 0x14B9
    int32 m_iBishopIndex; // offset 0x14BC, size 0x4, align 4
    GameTime_t m_tRecastEndTime; // offset 0x14C0, size 0x4, align 255
    char _pad_14C4[0xC]; // offset 0x14C4
    CUtlVector< CHandle< CBaseEntity > > m_vecShotBishops; // offset 0x14D0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0x14E8, size 0x18, align 8
    VectorWS m_vecLaunchPosition; // offset 0x1500, size 0xC, align 4
    Vector m_vecLaunchVelocity; // offset 0x150C, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x1518, size 0xC, align 4
    char _pad_1524[0x9A4]; // offset 0x1524
};
