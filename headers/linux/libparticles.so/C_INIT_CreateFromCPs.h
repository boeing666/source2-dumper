#pragma once

class C_INIT_CreateFromCPs : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x348, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nIncrement; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMinCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxCP; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName MParticleMinVersion
    CParticleCollectionFloatInput m_nDynamicCPCount; // offset 0x1E0, size 0x168, align 8 | MPropertyFriendlyName
};
