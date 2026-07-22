#pragma once

class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter /*0x0*/  // sizeof 0x648, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_nParticlesToEmit; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange
    CParticleCollectionFloatInput m_flStartTime; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flInitFromKilledParentParticles; // offset 0x4C0, size 0x4, align 4 | MPropertyFriendlyName
    EventTypeSelection_t m_nEventType; // offset 0x4C4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flParentParticleScale; // offset 0x4C8, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nMaxEmittedPerFrame; // offset 0x638, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSnapshotControlPoint; // offset 0x63C, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_strSnapshotSubset; // offset 0x640, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
