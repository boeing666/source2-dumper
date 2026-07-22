#pragma once

class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionVecInput m_vecRotAxis; // offset 0x1D8, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_flRotRate; // offset 0x890, size 0x170, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0xA00, size 0x68, align 8 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xA68, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A69[0x7]; // offset 0xA69
};
