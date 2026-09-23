#pragma once

class C_OP_AttractToControlPoint : public CParticleFunctionForce /*0x0*/  // sizeof 0x6B0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E4]; // offset 0x0
    Vector m_vecComponentScale; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_fForceAmount; // offset 0x1F0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fMinimumDistance; // offset 0x360, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_fFalloffPower; // offset 0x4D0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04D4[0x4]; // offset 0x4D4
    CParticleTransformInput m_TransformInput; // offset 0x4D8, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fForceAmountMin; // offset 0x538, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bApplyMinForce; // offset 0x6A8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_06A9[0x7]; // offset 0x6A9
};
