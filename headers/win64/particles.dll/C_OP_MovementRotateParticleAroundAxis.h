#pragma once

class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionVecInput m_vecRotAxis; // offset 0x1E0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionFloatInput m_flRotRate; // offset 0x8B8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0xA30, size 0x68, align 8 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xA98, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A99[0x7]; // offset 0xA99
};
