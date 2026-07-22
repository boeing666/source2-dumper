#pragma once

class C_OP_AttractToControlPoint : public CParticleFunctionForce /*0x0*/  // sizeof 0x690, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    Vector m_vecComponentScale; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_fForceAmount; // offset 0x1E8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fMinimumDistance; // offset 0x350, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_fFalloffPower; // offset 0x4B8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04BC[0x4]; // offset 0x4BC
    CParticleTransformInput m_TransformInput; // offset 0x4C0, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fForceAmountMin; // offset 0x520, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bApplyMinForce; // offset 0x688, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0689[0x7]; // offset 0x689
};
