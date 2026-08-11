#pragma once

class CCitadel_Ability_TangoTether : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1118, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    int32 m_iTargetPosIndex; // offset 0xF70, size 0x4, align 4
    CHandle< CBaseEntity > m_hLockOnTarget; // offset 0xF74, size 0x4, align 4
    Vector m_vecCastStartPos; // offset 0xF78, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vecDashStartPos; // offset 0xF84, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vecDashEndPos; // offset 0xF90, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    QAngle m_angDashStartAng; // offset 0xF9C, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDashStartTime; // offset 0xFA8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flGrappleStartTime; // offset 0xFAC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGrappleArriveTime; // offset 0xFB0, size 0x4, align 255 | MNetworkEnable
    CHandle< CBaseEntity > m_hTarget; // offset 0xFB4, size 0x4, align 4 | MNetworkEnable
    float32 m_flVelSpring; // offset 0xFB8, size 0x4, align 4
    GameTime_t m_flGrappleShotAttackTime; // offset 0xFBC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nTicksNotMoving; // offset 0xFC0, size 0x4, align 4
    Vector m_vecPrevPos; // offset 0xFC4, size 0xC, align 4
    Vector[20] m_rgTargetPos; // offset 0xFD0, size 0xF0, align 4 | MNetworkEnable MNetworkUserGroup MNetworkEncoder
    GameTime_t[20] m_rgTargetPosTime; // offset 0x10C0, size 0x50, align 4 | MNetworkEnable MNetworkUserGroup
    ParticleIndex_t m_nGrappleTravelEffect; // offset 0x1110, size 0x4, align 255
    char _pad_1114[0x4]; // offset 0x1114
};
