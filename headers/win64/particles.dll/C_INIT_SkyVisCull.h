#pragma once

class C_INIT_SkyVisCull : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xFA0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleVecInput m_vecTestPosition; // offset 0x1E8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CParticleCollectionVecInput m_vecTestDir; // offset 0x8C0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleTraceSet_t m_nTraceSet; // offset 0xF98, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCullOnSky; // offset 0xF9C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F9D[0x3]; // offset 0xF9D
};
