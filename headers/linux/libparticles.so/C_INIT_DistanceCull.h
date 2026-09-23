#pragma once

class C_INIT_DistanceCull : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x358, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nControlPoint; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flDistance; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bCullInside; // offset 0x350, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0351[0x7]; // offset 0x351
};
