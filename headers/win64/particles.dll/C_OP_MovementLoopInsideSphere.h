#pragma once

class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator /*0x0*/  // sizeof 0xA10, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleCollectionFloatInput m_flDistance; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecScale; // offset 0x350, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nDistSqrAttr; // offset 0xA08, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0A0C[0x4]; // offset 0xA0C
};
