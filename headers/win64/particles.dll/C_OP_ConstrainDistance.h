#pragma once

class C_OP_ConstrainDistance : public CParticleFunctionConstraint /*0x0*/  // sizeof 0xC18, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_fMinDistance; // offset 0x1E0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_fMaxDistance; // offset 0x358, size 0x178, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_nControlPointNumber; // offset 0x4D0, size 0x68, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_CenterOffset; // offset 0x538, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bGlobalCenter; // offset 0xC10, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0C11[0x7]; // offset 0xC11
};
