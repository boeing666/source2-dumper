#pragma once

class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x500, align 0x10 [vtable] (particles) {MParticleMinVersion MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_fMaxDistance; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumToAssign; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bLoop; // offset 0x4A8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCPPairs; // offset 0x4A9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSaveOffset; // offset 0x4AA, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04AB[0x5]; // offset 0x4AB
    CPathParameters m_PathParams; // offset 0x4B0, size 0x40, align 16
    char _pad_04F0[0x10]; // offset 0x4F0
};
