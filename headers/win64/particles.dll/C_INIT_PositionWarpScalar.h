#pragma once

class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x388, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    Vector m_vecWarpMin; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecWarpMax; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_InputValue; // offset 0x200, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x378, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleControlPointNumber; // offset 0x37C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x380, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0384[0x4]; // offset 0x384
};
