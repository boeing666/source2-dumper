#pragma once

struct VPhysXJoint_t  // sizeof 0xD0, align 0x10 (modellib) {MGetKV3ClassDefaults}
{
    uint16 m_nType; // offset 0x0, size 0x2, align 2
    uint16 m_nBody1; // offset 0x2, size 0x2, align 2
    uint16 m_nBody2; // offset 0x4, size 0x2, align 2
    uint16 m_nFlags; // offset 0x6, size 0x2, align 2
    char _pad_0008[0x8]; // offset 0x8
    CTransform m_Frame1; // offset 0x10, size 0x20, align 16
    CTransform m_Frame2; // offset 0x30, size 0x20, align 16
    bool m_bEnableCollision; // offset 0x50, size 0x1, align 1
    bool m_bIsLinearConstraintDisabled; // offset 0x51, size 0x1, align 1
    bool m_bIsAngularConstraintDisabled; // offset 0x52, size 0x1, align 1
    bool m_bEnableLinearLimit; // offset 0x53, size 0x1, align 1
    VPhysXRange_t m_LinearLimit; // offset 0x54, size 0x8, align 4
    bool m_bEnableLinearMotor; // offset 0x5C, size 0x1, align 1
    char _pad_005D[0x3]; // offset 0x5D
    Vector m_vLinearTargetVelocity; // offset 0x60, size 0xC, align 4
    float32 m_flMaxForce; // offset 0x6C, size 0x4, align 4
    bool m_bEnableSwingLimit; // offset 0x70, size 0x1, align 1
    char _pad_0071[0x3]; // offset 0x71
    VPhysXRange_t m_SwingLimit; // offset 0x74, size 0x8, align 4
    bool m_bEnableTwistLimit; // offset 0x7C, size 0x1, align 1
    char _pad_007D[0x3]; // offset 0x7D
    VPhysXRange_t m_TwistLimit; // offset 0x80, size 0x8, align 4
    bool m_bEnableAngularMotor; // offset 0x88, size 0x1, align 1
    char _pad_0089[0x3]; // offset 0x89
    Vector m_vAngularTargetVelocity; // offset 0x8C, size 0xC, align 4
    float32 m_flMaxTorque; // offset 0x98, size 0x4, align 4
    float32 m_flLinearFrequency; // offset 0x9C, size 0x4, align 4
    float32 m_flLinearDampingRatio; // offset 0xA0, size 0x4, align 4
    float32 m_flAngularFrequency; // offset 0xA4, size 0x4, align 4
    float32 m_flAngularDampingRatio; // offset 0xA8, size 0x4, align 4
    float32 m_flFriction; // offset 0xAC, size 0x4, align 4
    float32 m_flElasticity; // offset 0xB0, size 0x4, align 4
    float32 m_flElasticDamping; // offset 0xB4, size 0x4, align 4
    float32 m_flPlasticity; // offset 0xB8, size 0x4, align 4
    char _pad_00BC[0x4]; // offset 0xBC
    CUtlString m_Tag; // offset 0xC0, size 0x8, align 8
    char _pad_00C8[0x8]; // offset 0xC8
};
