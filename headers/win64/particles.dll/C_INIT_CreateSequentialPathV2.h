#pragma once

class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x520, align 0x10 [vtable] (particles) {MParticleMinVersion MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_fMaxDistance; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumToAssign; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bLoop; // offset 0x4C0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCPPairs; // offset 0x4C1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSaveOffset; // offset 0x4C2, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04C3[0xD]; // offset 0x4C3
    CPathParameters m_PathParams; // offset 0x4D0, size 0x40, align 16
    char _pad_0510[0x10]; // offset 0x510
};
