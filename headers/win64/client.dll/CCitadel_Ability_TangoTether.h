#pragma once

class CCitadel_Ability_TangoTether : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1878, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    SatVolumeIndex_t m_desatVolIdx; // offset 0x16D8, size 0x4, align 255
    Vector m_vecCastStartPos; // offset 0x16DC, size 0xC, align 4
    Vector m_vecDashStartPos; // offset 0x16E8, size 0xC, align 4
    Vector m_vecDashEndPos; // offset 0x16F4, size 0xC, align 4
    QAngle m_angDashStartAng; // offset 0x1700, size 0xC, align 4
    GameTime_t m_flDashStartTime; // offset 0x170C, size 0x4, align 255
    GameTime_t m_flGrappleStartTime; // offset 0x1710, size 0x4, align 255
    GameTime_t m_flGrappleArriveTime; // offset 0x1714, size 0x4, align 255
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1718, size 0x4, align 4
    float32 m_flVelSpring; // offset 0x171C, size 0x4, align 4
    GameTime_t m_flGrappleShotAttackTime; // offset 0x1720, size 0x4, align 255
    int32 m_nTicksNotMoving; // offset 0x1724, size 0x4, align 4
    Vector m_vecPrevPos; // offset 0x1728, size 0xC, align 4
    Vector[20] m_rgTargetPos; // offset 0x1734, size 0xF0, align 4
    GameTime_t[20] m_rgTargetPosTime; // offset 0x1824, size 0x50, align 4
    ParticleIndex_t m_nGrappleTravelEffect; // offset 0x1874, size 0x4, align 255
};
