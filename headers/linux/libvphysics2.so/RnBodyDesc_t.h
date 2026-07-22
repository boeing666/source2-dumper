#pragma once

struct RnBodyDesc_t  // sizeof 0xE0, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    CUtlString m_sDebugName; // offset 0x0, size 0x8, align 8
    VectorWS m_vPosition; // offset 0x8, size 0xC, align 4
    QuaternionStorage m_qOrientation; // offset 0x14, size 0x10, align 4
    Vector m_vLinearVelocity; // offset 0x24, size 0xC, align 4
    Vector m_vAngularVelocity; // offset 0x30, size 0xC, align 4
    Vector m_vLocalMassCenter; // offset 0x3C, size 0xC, align 4
    Vector[3] m_LocalInertiaInv; // offset 0x48, size 0x24, align 4
    float32 m_flMassInv; // offset 0x6C, size 0x4, align 4
    float32 m_flGameMass; // offset 0x70, size 0x4, align 4
    float32 m_flMassScaleInv; // offset 0x74, size 0x4, align 4
    float32 m_flInertiaScaleInv; // offset 0x78, size 0x4, align 4
    float32 m_flLinearDamping; // offset 0x7C, size 0x4, align 4
    float32 m_flAngularDamping; // offset 0x80, size 0x4, align 4
    float32 m_flLinearDragScale; // offset 0x84, size 0x4, align 4
    float32 m_flAngularDragScale; // offset 0x88, size 0x4, align 4
    float32 m_flLinearFluidDragScale; // offset 0x8C, size 0x4, align 4
    float32 m_flAngularFluidDragScale; // offset 0x90, size 0x4, align 4
    Vector m_vLastAwakeForceAccum; // offset 0x94, size 0xC, align 4
    Vector m_vLastAwakeTorqueAccum; // offset 0xA0, size 0xC, align 4
    float32 m_flBuoyancyScale; // offset 0xAC, size 0x4, align 4
    float32 m_flGravityScale; // offset 0xB0, size 0x4, align 4
    float32 m_flTimeScale; // offset 0xB4, size 0x4, align 4
    int32 m_nBodyType; // offset 0xB8, size 0x4, align 4
    uint32 m_nGameIndex; // offset 0xBC, size 0x4, align 4
    uint32 m_nGameFlags; // offset 0xC0, size 0x4, align 4
    int8 m_nMinVelocityIterations; // offset 0xC4, size 0x1, align 1
    int8 m_nMinPositionIterations; // offset 0xC5, size 0x1, align 1
    int8 m_nMassPriority; // offset 0xC6, size 0x1, align 1
    bool m_bEnabled; // offset 0xC7, size 0x1, align 1
    bool m_bSleeping; // offset 0xC8, size 0x1, align 1
    bool m_bIsContinuousEnabled; // offset 0xC9, size 0x1, align 1
    bool m_bDragEnabled; // offset 0xCA, size 0x1, align 1
    char _pad_00CB[0x1]; // offset 0xCB
    Vector m_vGravity; // offset 0xCC, size 0xC, align 4
    bool m_bSpeculativeEnabled; // offset 0xD8, size 0x1, align 1
    bool m_bHasShadowController; // offset 0xD9, size 0x1, align 1
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // offset 0xDA, size 0x1, align 1
    char _pad_00DB[0x5]; // offset 0xDB
};
