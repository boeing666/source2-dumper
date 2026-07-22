#pragma once

class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x368, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    Vector m_vecWarpMin; // offset 0x1D4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecWarpMax; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01EC[0x4]; // offset 0x1EC
    CPerParticleFloatInput m_InputValue; // offset 0x1F0, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x358, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nScaleControlPointNumber; // offset 0x35C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x360, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0364[0x4]; // offset 0x364
};
