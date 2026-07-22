#pragma once

class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x618, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_nChildGroupID; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nFirstChild; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nNumChildrenToEnable; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bPlayEndcapOnStop; // offset 0x610, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDestroyImmediately; // offset 0x611, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0612[0x6]; // offset 0x612
};
