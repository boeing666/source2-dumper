#pragma once

class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x648, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flDistance; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bIncludeRadii; // offset 0x350, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0351[0x7]; // offset 0x351
    CPerParticleFloatInput m_flLifespanOverlap; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldModify; // offset 0x4C8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_04CC[0x4]; // offset 0x4CC
    CPerParticleFloatInput m_flModify; // offset 0x4D0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleSetMethod_t m_nSetMethod; // offset 0x640, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bUseNeighbor; // offset 0x644, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0645[0x3]; // offset 0x645
};
