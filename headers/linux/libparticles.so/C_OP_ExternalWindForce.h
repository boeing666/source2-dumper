#pragma once

class C_OP_ExternalWindForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x1F00, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleVecInput m_vecSamplePosition; // offset 0x1E0, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecScale; // offset 0x870, size 0x690, align 8 | MPropertyFriendlyName
    bool m_bSampleWind; // offset 0xF00, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSampleWater; // offset 0xF01, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDampenNearWaterPlane; // offset 0xF02, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bSampleGravity; // offset 0xF03, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F04[0x4]; // offset 0xF04
    CPerParticleVecInput m_vecGravityForce; // offset 0xF08, size 0x690, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bUseBasicMovementGravity; // offset 0x1598, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1599[0x7]; // offset 0x1599
    CPerParticleFloatInput m_flLocalGravityScale; // offset 0x15A0, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flLocalBuoyancyScale; // offset 0x1708, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vecBuoyancyForce; // offset 0x1870, size 0x690, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
