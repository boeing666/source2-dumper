#pragma once

class C_OP_ConstrainDistance : public CParticleFunctionConstraint /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_fMinDistance; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_fMaxDistance; // offset 0x348, size 0x170, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_nControlPointNumber; // offset 0x4B8, size 0x60, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_CenterOffset; // offset 0x518, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bGlobalCenter; // offset 0xBC8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0BC9[0x7]; // offset 0xBC9
};
