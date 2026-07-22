#pragma once

class C_OP_AttractToControlPoint : public CParticleFunctionForce /*0x0*/  // sizeof 0x550, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    Vector m_vecComponentScale; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01F4[0x4]; // offset 0x1F4
    CPerParticleFloatInput m_fForceAmount; // offset 0x1F8, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_fFalloffPower; // offset 0x368, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_036C[0x4]; // offset 0x36C
    CParticleTransformInput m_TransformInput; // offset 0x370, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_fForceAmountMin; // offset 0x3D8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bApplyMinForce; // offset 0x548, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0549[0x7]; // offset 0x549
};
