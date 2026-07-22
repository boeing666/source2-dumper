#pragma once

class CFeJiggleBone  // sizeof 0x9C, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
public:
    uint32 m_nFlags; // offset 0x0, size 0x4, align 4
    float32 m_flLength; // offset 0x4, size 0x4, align 4
    float32 m_flTipMass; // offset 0x8, size 0x4, align 4
    float32 m_flYawStiffness; // offset 0xC, size 0x4, align 4
    float32 m_flYawDamping; // offset 0x10, size 0x4, align 4
    float32 m_flPitchStiffness; // offset 0x14, size 0x4, align 4
    float32 m_flPitchDamping; // offset 0x18, size 0x4, align 4
    float32 m_flAlongStiffness; // offset 0x1C, size 0x4, align 4
    float32 m_flAlongDamping; // offset 0x20, size 0x4, align 4
    float32 m_flAngleLimit; // offset 0x24, size 0x4, align 4
    float32 m_flMinYaw; // offset 0x28, size 0x4, align 4
    float32 m_flMaxYaw; // offset 0x2C, size 0x4, align 4
    float32 m_flYawFriction; // offset 0x30, size 0x4, align 4
    float32 m_flYawBounce; // offset 0x34, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x38, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x3C, size 0x4, align 4
    float32 m_flPitchFriction; // offset 0x40, size 0x4, align 4
    float32 m_flPitchBounce; // offset 0x44, size 0x4, align 4
    float32 m_flBaseMass; // offset 0x48, size 0x4, align 4
    float32 m_flBaseStiffness; // offset 0x4C, size 0x4, align 4
    float32 m_flBaseDamping; // offset 0x50, size 0x4, align 4
    float32 m_flBaseMinLeft; // offset 0x54, size 0x4, align 4
    float32 m_flBaseMaxLeft; // offset 0x58, size 0x4, align 4
    float32 m_flBaseLeftFriction; // offset 0x5C, size 0x4, align 4
    float32 m_flBaseMinUp; // offset 0x60, size 0x4, align 4
    float32 m_flBaseMaxUp; // offset 0x64, size 0x4, align 4
    float32 m_flBaseUpFriction; // offset 0x68, size 0x4, align 4
    float32 m_flBaseMinForward; // offset 0x6C, size 0x4, align 4
    float32 m_flBaseMaxForward; // offset 0x70, size 0x4, align 4
    float32 m_flBaseForwardFriction; // offset 0x74, size 0x4, align 4
    float32 m_flRadius0; // offset 0x78, size 0x4, align 4
    float32 m_flRadius1; // offset 0x7C, size 0x4, align 4
    Vector m_vPoint0; // offset 0x80, size 0xC, align 4
    Vector m_vPoint1; // offset 0x8C, size 0xC, align 4
    uint16 m_nCollisionMask; // offset 0x98, size 0x2, align 2
    char _pad_009A[0x2]; // offset 0x9A
};
