#pragma once

class C_OP_ContinuousEmitter : public CParticleFunctionEmitter /*0x0*/  // sizeof 0x640, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_flEmissionDuration; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flStartTime; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flEmitRate; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flEmissionScale; // offset 0x610, size 0x4, align 4 | MPropertyFriendlyName MParticleMaxVersion
    float32 m_flScalePerParentParticle; // offset 0x614, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bInitFromKilledParentParticles; // offset 0x618, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0619[0x3]; // offset 0x619
    EventTypeSelection_t m_nEventType; // offset 0x61C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nSnapshotControlPoint; // offset 0x620, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0624[0x4]; // offset 0x624
    CUtlString m_strSnapshotSubset; // offset 0x628, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nLimitPerUpdate; // offset 0x630, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bForceEmitOnFirstUpdate; // offset 0x634, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceEmitOnLastUpdate; // offset 0x635, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0636[0xA]; // offset 0x636
};
