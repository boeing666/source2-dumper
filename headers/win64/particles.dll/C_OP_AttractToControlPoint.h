#pragma once

class C_OP_AttractToControlPoint : public CParticleFunctionForce /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    Vector m_vecComponentScale; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01FC[0x4]; // offset 0x1FC
    CPerParticleFloatInput m_fForceAmount; // offset 0x200, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fMinimumDistance; // offset 0x378, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_fFalloffPower; // offset 0x4F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04F4[0x4]; // offset 0x4F4
    CParticleTransformInput m_TransformInput; // offset 0x4F8, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fForceAmountMin; // offset 0x560, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bApplyMinForce; // offset 0x6D8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_06D9[0x7]; // offset 0x6D9
};
