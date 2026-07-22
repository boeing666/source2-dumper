#pragma once

class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x628, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_flDistance; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bIncludeRadii; // offset 0x340, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0341[0x7]; // offset 0x341
    CPerParticleFloatInput m_flLifespanOverlap; // offset 0x348, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldModify; // offset 0x4B0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_04B4[0x4]; // offset 0x4B4
    CPerParticleFloatInput m_flModify; // offset 0x4B8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleSetMethod_t m_nSetMethod; // offset 0x620, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bUseNeighbor; // offset 0x624, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0625[0x3]; // offset 0x625
};
