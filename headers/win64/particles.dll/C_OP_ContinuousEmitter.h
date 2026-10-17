#pragma once

class C_OP_ContinuousEmitter : public CParticleFunctionEmitter /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleCollectionFloatInput m_flEmissionDuration; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flStartTime; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flEmitRate; // offset 0x4D8, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flEmissionScale; // offset 0x650, size 0x4, align 4 | MPropertyFriendlyName MParticleMaxVersion
    float32 m_flScalePerParentParticle; // offset 0x654, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bInitFromKilledParentParticles; // offset 0x658, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0659[0x3]; // offset 0x659
    EventTypeSelection_t m_nEventType; // offset 0x65C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nSnapshotControlPoint; // offset 0x660, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0664[0x4]; // offset 0x664
    CUtlString m_strSnapshotSubset; // offset 0x668, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nLimitPerUpdate; // offset 0x670, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bForceEmitOnFirstUpdate; // offset 0x674, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceEmitOnLastUpdate; // offset 0x675, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0676[0xA]; // offset 0x676
};
