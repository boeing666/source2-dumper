#pragma once

class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x530, align 0x10 [vtable] (particles) {MParticleMinVersion MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_fMaxDistance; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumToAssign; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bLoop; // offset 0x4D8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCPPairs; // offset 0x4D9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSaveOffset; // offset 0x4DA, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04DB[0x5]; // offset 0x4DB
    CPathParameters m_PathParams; // offset 0x4E0, size 0x40, align 16
    char _pad_0520[0x10]; // offset 0x520
};
