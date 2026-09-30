#pragma once

class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nCP; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionFloatInput m_flDistance; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecScale; // offset 0x360, size 0x6D8, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nDistSqrAttr; // offset 0xA38, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0A3C[0x4]; // offset 0xA3C
};
