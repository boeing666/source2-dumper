#pragma once

class CBuoyancyHelper  // sizeof 0x118, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    IPhysicsMotionController* m_pController; // offset 0x8, size 0x8, align 8 | MPhysPtr
    char _pad_0010[0x8]; // offset 0x10
    CUtlStringToken m_nFluidType; // offset 0x18, size 0x4, align 4
    float32 m_flFluidDensity; // offset 0x1C, size 0x4, align 4
    float32 m_flNeutrallyBuoyantGravity; // offset 0x20, size 0x4, align 4
    float32 m_flNeutrallyBuoyantLinearDamping; // offset 0x24, size 0x4, align 4
    float32 m_flNeutrallyBuoyantAngularDamping; // offset 0x28, size 0x4, align 4
    bool m_bNeutrallyBuoyant; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
    CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelFriction; // offset 0x30, size 0x18, align 8
    CUtlVector< float32 > m_vecWheelFrictionScales; // offset 0x48, size 0x18, align 8
    CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelDrag; // offset 0x60, size 0x18, align 8
    CUtlVector< float32 > m_vecWheelDrag; // offset 0x78, size 0x18, align 8
    char _pad_0090[0x88]; // offset 0x90
};
