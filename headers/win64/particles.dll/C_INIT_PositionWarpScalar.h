#pragma once

class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x378, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    Vector m_vecWarpMin; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecWarpMax; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_InputValue; // offset 0x1F8, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x368, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleControlPointNumber; // offset 0x36C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x370, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0374[0x4]; // offset 0x374
};
