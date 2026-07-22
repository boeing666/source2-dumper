#pragma once

class C_INIT_CreateOnGrid : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_nXCount; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nYCount; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nZCount; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nXSpacing; // offset 0x630, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nYSpacing; // offset 0x7A0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nZSpacing; // offset 0x910, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0xA80, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalSpace; // offset 0xA84, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCenter; // offset 0xA85, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bHollow; // offset 0xA86, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A87[0x1]; // offset 0xA87
};
