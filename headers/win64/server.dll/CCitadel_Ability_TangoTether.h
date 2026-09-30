#pragma once

class CCitadel_Ability_TangoTether : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1648, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    int32 m_iTargetPosIndex; // offset 0x14A0, size 0x4, align 4
    CHandle< CBaseEntity > m_hLockOnTarget; // offset 0x14A4, size 0x4, align 4
    Vector m_vecCastStartPos; // offset 0x14A8, size 0xC, align 4
    Vector m_vecDashStartPos; // offset 0x14B4, size 0xC, align 4
    Vector m_vecDashEndPos; // offset 0x14C0, size 0xC, align 4
    QAngle m_angDashStartAng; // offset 0x14CC, size 0xC, align 4
    GameTime_t m_flDashStartTime; // offset 0x14D8, size 0x4, align 255
    GameTime_t m_flGrappleStartTime; // offset 0x14DC, size 0x4, align 255
    GameTime_t m_flGrappleArriveTime; // offset 0x14E0, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x14E4, size 0x4, align 4
    float32 m_flVelSpring; // offset 0x14E8, size 0x4, align 4
    GameTime_t m_flGrappleShotAttackTime; // offset 0x14EC, size 0x4, align 255
    int32 m_nTicksNotMoving; // offset 0x14F0, size 0x4, align 4
    Vector m_vecPrevPos; // offset 0x14F4, size 0xC, align 4
    Vector[20] m_rgTargetPos; // offset 0x1500, size 0xF0, align 4
    GameTime_t[20] m_rgTargetPosTime; // offset 0x15F0, size 0x50, align 4
    ParticleIndex_t m_nGrappleTravelEffect; // offset 0x1640, size 0x4, align 255
    char _pad_1644[0x4]; // offset 0x1644
};
