#pragma once

class C_INIT_PlaneCull : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x370, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nControlPoint; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CParticleCollectionFloatInput m_flDistance; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bCullInside; // offset 0x368, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0369[0x7]; // offset 0x369
};
