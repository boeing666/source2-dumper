#pragma once

class C_INIT_CreateOnGrid : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xAC0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleCollectionFloatInput m_nXCount; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nYCount; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nZCount; // offset 0x4D8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nXSpacing; // offset 0x650, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nYSpacing; // offset 0x7C8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nZSpacing; // offset 0x940, size 0x178, align 8 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0xAB8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xABC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCenter; // offset 0xABD, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bHollow; // offset 0xABE, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0ABF[0x1]; // offset 0xABF
};
