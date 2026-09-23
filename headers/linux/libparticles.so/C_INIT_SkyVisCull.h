#pragma once

class C_INIT_SkyVisCull : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionVecInput m_vecTestDir; // offset 0x1E0, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleTraceSet_t m_nTraceSet; // offset 0x890, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCullOnSky; // offset 0x894, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0895[0x3]; // offset 0x895
};
