#pragma once

class C_INIT_CreateOnGrid : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_nXCount; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nYCount; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nZCount; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nXSpacing; // offset 0x610, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nYSpacing; // offset 0x778, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nZSpacing; // offset 0x8E0, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0xA48, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xA4C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCenter; // offset 0xA4D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bHollow; // offset 0xA4E, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A4F[0x1]; // offset 0xA4F
};
