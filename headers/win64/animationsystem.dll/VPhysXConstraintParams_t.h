#pragma once

struct VPhysXConstraintParams_t  // sizeof 0xF8, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
    int8 m_nType; // offset 0x0, size 0x1, align 1
    int8 m_nTranslateMotion; // offset 0x1, size 0x1, align 1
    int8 m_nRotateMotion; // offset 0x2, size 0x1, align 1
    int8 m_nFlags; // offset 0x3, size 0x1, align 1
    Vector[2] m_anchor; // offset 0x4, size 0x18, align 4
    QuaternionStorage[2] m_axes; // offset 0x1C, size 0x20, align 4
    float32 m_maxForce; // offset 0x3C, size 0x4, align 4
    float32 m_maxTorque; // offset 0x40, size 0x4, align 4
    float32 m_linearLimitValue; // offset 0x44, size 0x4, align 4
    float32 m_linearLimitRestitution; // offset 0x48, size 0x4, align 4
    float32 m_linearLimitSpring; // offset 0x4C, size 0x4, align 4
    float32 m_linearLimitDamping; // offset 0x50, size 0x4, align 4
    float32 m_twistLowLimitValue; // offset 0x54, size 0x4, align 4
    float32 m_twistLowLimitRestitution; // offset 0x58, size 0x4, align 4
    float32 m_twistLowLimitSpring; // offset 0x5C, size 0x4, align 4
    float32 m_twistLowLimitDamping; // offset 0x60, size 0x4, align 4
    float32 m_twistHighLimitValue; // offset 0x64, size 0x4, align 4
    float32 m_twistHighLimitRestitution; // offset 0x68, size 0x4, align 4
    float32 m_twistHighLimitSpring; // offset 0x6C, size 0x4, align 4
    float32 m_twistHighLimitDamping; // offset 0x70, size 0x4, align 4
    float32 m_swing1LimitValue; // offset 0x74, size 0x4, align 4
    float32 m_swing1LimitRestitution; // offset 0x78, size 0x4, align 4
    float32 m_swing1LimitSpring; // offset 0x7C, size 0x4, align 4
    float32 m_swing1LimitDamping; // offset 0x80, size 0x4, align 4
    float32 m_swing2LimitValue; // offset 0x84, size 0x4, align 4
    float32 m_swing2LimitRestitution; // offset 0x88, size 0x4, align 4
    float32 m_swing2LimitSpring; // offset 0x8C, size 0x4, align 4
    float32 m_swing2LimitDamping; // offset 0x90, size 0x4, align 4
    Vector m_goalPosition; // offset 0x94, size 0xC, align 4
    QuaternionStorage m_goalOrientation; // offset 0xA0, size 0x10, align 4
    Vector m_goalAngularVelocity; // offset 0xB0, size 0xC, align 4
    float32 m_driveSpringX; // offset 0xBC, size 0x4, align 4
    float32 m_driveSpringY; // offset 0xC0, size 0x4, align 4
    float32 m_driveSpringZ; // offset 0xC4, size 0x4, align 4
    float32 m_driveDampingX; // offset 0xC8, size 0x4, align 4
    float32 m_driveDampingY; // offset 0xCC, size 0x4, align 4
    float32 m_driveDampingZ; // offset 0xD0, size 0x4, align 4
    float32 m_driveSpringTwist; // offset 0xD4, size 0x4, align 4
    float32 m_driveSpringSwing; // offset 0xD8, size 0x4, align 4
    float32 m_driveSpringSlerp; // offset 0xDC, size 0x4, align 4
    float32 m_driveDampingTwist; // offset 0xE0, size 0x4, align 4
    float32 m_driveDampingSwing; // offset 0xE4, size 0x4, align 4
    float32 m_driveDampingSlerp; // offset 0xE8, size 0x4, align 4
    int32 m_solverIterationCount; // offset 0xEC, size 0x4, align 4
    float32 m_projectionLinearTolerance; // offset 0xF0, size 0x4, align 4
    float32 m_projectionAngularTolerance; // offset 0xF4, size 0x4, align 4
};
