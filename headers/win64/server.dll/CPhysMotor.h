#pragma once

class CPhysMotor : public CLogicalEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlSymbolLarge m_nameAttach; // offset 0x4A0, size 0x8, align 8
    CUtlSymbolLarge m_nameAnchor; // offset 0x4A8, size 0x8, align 8
    CHandle< CBaseEntity > m_hAttachedObject; // offset 0x4B0, size 0x4, align 4
    CHandle< CBaseEntity > m_hAnchorObject; // offset 0x4B4, size 0x4, align 4
    float32 m_spinUp; // offset 0x4B8, size 0x4, align 4
    float32 m_spinDown; // offset 0x4BC, size 0x4, align 4
    float32 m_flMotorFriction; // offset 0x4C0, size 0x4, align 4
    float32 m_additionalAcceleration; // offset 0x4C4, size 0x4, align 4
    float32 m_angularAcceleration; // offset 0x4C8, size 0x4, align 4
    float32 m_flTorqueScale; // offset 0x4CC, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0x4D0, size 0x4, align 4
    float32 m_flSpeedWhenSpinUpOrSpinDownStarted; // offset 0x4D4, size 0x4, align 4
    IPhysicsBody* m_pFixedWorldBody; // offset 0x4D8, size 0x8, align 8 | MPhysPtr
    IPhysicsJoint* m_pMotorJoint; // offset 0x4E0, size 0x8, align 8 | MPhysPtr
    CMotorController m_motor; // offset 0x4E8, size 0x20, align 255
};
