#pragma once

class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter /*0x0*/  // sizeof 0x628, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_nParticlesToEmit; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName MPropertyAttributeRange
    CParticleCollectionFloatInput m_flStartTime; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flInitFromKilledParentParticles; // offset 0x4A8, size 0x4, align 4 | MPropertyFriendlyName
    EventTypeSelection_t m_nEventType; // offset 0x4AC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flParentParticleScale; // offset 0x4B0, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nMaxEmittedPerFrame; // offset 0x618, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSnapshotControlPoint; // offset 0x61C, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_strSnapshotSubset; // offset 0x620, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
