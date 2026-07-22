#pragma once

class C_OP_ClientPhysics : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x538, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CUtlString m_strPhysicsType; // offset 0x228, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    bool m_bStartAsleep; // offset 0x230, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0231[0x7]; // offset 0x231
    CParticleCollectionFloatInput m_flPlayerWakeRadius; // offset 0x238, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flVehicleWakeRadius; // offset 0x3A8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bUseHighQualitySimulation; // offset 0x518, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0519[0x3]; // offset 0x519
    int32 m_nMaxParticleCount; // offset 0x51C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRespectExclusionVolumes; // offset 0x520, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bKillParticles; // offset 0x521, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDeleteSim; // offset 0x522, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0523[0x1]; // offset 0x523
    int32 m_nControlPoint; // offset 0x524, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nForcedSimId; // offset 0x528, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x52C, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttrBoxFlags_t m_nForcedStatusEffects; // offset 0x530, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0534[0x4]; // offset 0x534
};
