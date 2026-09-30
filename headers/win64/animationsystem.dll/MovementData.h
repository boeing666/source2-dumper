#pragma once

class MovementData  // sizeof 0xE8, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    Vector m_goalWayPointPos; // offset 0x0, size 0xC, align 4
    CAnimNetVar< Vector > m_vMoveDir; // offset 0xC, size 0x14, align 4
    CAnimNetVar< Vector > m_vAcceleration; // offset 0x20, size 0x14, align 4
    CAnimNetVar< float32 > m_flCurrentMoveSpeed; // offset 0x34, size 0xC, align 4
    CAnimNetVar< float32 > m_flTargetMoveSpeed; // offset 0x40, size 0xC, align 4
    CAnimNetVar< float32 > m_flGoalDistance; // offset 0x4C, size 0xC, align 4
    CAnimNetVar< float32 > m_flBoundaryRadius; // offset 0x58, size 0xC, align 4
    bool m_bGoalChanged; // offset 0x64, size 0x1, align 1
    char _pad_0065[0x3]; // offset 0x65
    CAnimNetVar< bool > m_bHasPath; // offset 0x68, size 0xC, align 4
    CAnimNetVar< float32 > m_flFacingHeading; // offset 0x74, size 0xC, align 4
    Vector m_vManualFacingDirection; // offset 0x80, size 0xC, align 4
    VectorWS m_vManualFacingTarget; // offset 0x8C, size 0xC, align 4
    CAnimNetVar< uint8 > m_nFacingMode; // offset 0x98, size 0xC, align 4
    CAnimNetVar< bool > m_bForceFacing; // offset 0xA4, size 0xC, align 4
    CAnimNetVar< int32 > m_nActiveMotorIndex; // offset 0xB0, size 0xC, align 4
    CAnimNetVar< bool > m_bOnGround; // offset 0xBC, size 0xC, align 4
    CAnimNetVar< Vector > m_vFacingPosition; // offset 0xC8, size 0x14, align 4
    Vector m_vPrevFacingPosition; // offset 0xDC, size 0xC, align 4
};
