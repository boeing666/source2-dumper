#pragma once

class CCitadel_Ability_TangoTether : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1378, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    SatVolumeIndex_t m_desatVolIdx; // offset 0x11D8, size 0x4, align 255
    Vector m_vecCastStartPos; // offset 0x11DC, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vecDashStartPos; // offset 0x11E8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vecDashEndPos; // offset 0x11F4, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    QAngle m_angDashStartAng; // offset 0x1200, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDashStartTime; // offset 0x120C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flGrappleStartTime; // offset 0x1210, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGrappleArriveTime; // offset 0x1214, size 0x4, align 255 | MNetworkEnable
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1218, size 0x4, align 4 | MNetworkEnable
    float32 m_flVelSpring; // offset 0x121C, size 0x4, align 4
    GameTime_t m_flGrappleShotAttackTime; // offset 0x1220, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nTicksNotMoving; // offset 0x1224, size 0x4, align 4
    Vector m_vecPrevPos; // offset 0x1228, size 0xC, align 4
    Vector[20] m_rgTargetPos; // offset 0x1234, size 0xF0, align 4 | MNetworkEnable MNetworkUserGroup MNetworkEncoder
    GameTime_t[20] m_rgTargetPosTime; // offset 0x1324, size 0x50, align 4 | MNetworkEnable MNetworkUserGroup
    ParticleIndex_t m_nGrappleTravelEffect; // offset 0x1374, size 0x4, align 255
};
