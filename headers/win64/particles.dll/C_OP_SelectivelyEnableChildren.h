#pragma once

class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_nChildGroupID; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nFirstChild; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nNumChildrenToEnable; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bPlayEndcapOnStop; // offset 0x630, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDestroyImmediately; // offset 0x631, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0632[0x6]; // offset 0x632
};
