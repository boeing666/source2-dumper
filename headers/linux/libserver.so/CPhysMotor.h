#pragma once

class CPhysMotor : public CLogicalEntity /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_nameAttach; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_nameAnchor; // offset 0x780, size 0x8, align 8
    CHandle< CBaseEntity > m_hAttachedObject; // offset 0x788, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnchorObject; // offset 0x78C, size 0x4, align 4
    float32 m_spinUp; // offset 0x790, size 0x4, align 4
    float32 m_spinDown; // offset 0x794, size 0x4, align 4
    float32 m_flMotorFriction; // offset 0x798, size 0x4, align 4
    float32 m_additionalAcceleration; // offset 0x79C, size 0x4, align 4
    float32 m_angularAcceleration; // offset 0x7A0, size 0x4, align 4
    float32 m_flTorqueScale; // offset 0x7A4, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0x7A8, size 0x4, align 4
    float32 m_flSpeedWhenSpinUpOrSpinDownStarted; // offset 0x7AC, size 0x4, align 4
    IPhysicsBody* m_pFixedWorldBody; // offset 0x7B0, size 0x8, align 8 | MPhysPtr
    IPhysicsJoint* m_pMotorJoint; // offset 0x7B8, size 0x8, align 8 | MPhysPtr
    CMotorController m_motor; // offset 0x7C0, size 0x20, align 8
};
