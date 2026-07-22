#pragma once

class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator /*0x0*/  // sizeof 0xA30, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CParticleCollectionVecInput m_vecRotAxis; // offset 0x1D0, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_flRotRate; // offset 0x860, size 0x168, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0x9C8, size 0x60, align 8 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xA28, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A29[0x7]; // offset 0xA29
};
