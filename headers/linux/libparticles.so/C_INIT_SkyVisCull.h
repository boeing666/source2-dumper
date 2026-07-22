#pragma once

class C_INIT_SkyVisCull : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionVecInput m_vecTestDir; // offset 0x1D8, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleTraceSet_t m_nTraceSet; // offset 0x868, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCullOnSky; // offset 0x86C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_086D[0x3]; // offset 0x86D
};
