#pragma once

class C_OP_ExternalWindForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x1FB8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleVecInput m_vecSamplePosition; // offset 0x1E8, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecScale; // offset 0x8A0, size 0x6B8, align 8 | MPropertyFriendlyName
    bool m_bSampleWind; // offset 0xF58, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSampleWater; // offset 0xF59, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDampenNearWaterPlane; // offset 0xF5A, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bSampleGravity; // offset 0xF5B, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F5C[0x4]; // offset 0xF5C
    CPerParticleVecInput m_vecGravityForce; // offset 0xF60, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bUseBasicMovementGravity; // offset 0x1618, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1619[0x7]; // offset 0x1619
    CPerParticleFloatInput m_flLocalGravityScale; // offset 0x1620, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flLocalBuoyancyScale; // offset 0x1790, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vecBuoyancyForce; // offset 0x1900, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
