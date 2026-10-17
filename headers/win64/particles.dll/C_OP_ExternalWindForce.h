#pragma once

class C_OP_ExternalWindForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x2050, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    CPerParticleVecInput m_vecSamplePosition; // offset 0x1F0, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecScale; // offset 0x8C8, size 0x6D8, align 8 | MPropertyFriendlyName
    bool m_bSampleWind; // offset 0xFA0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSampleWater; // offset 0xFA1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDampenNearWaterPlane; // offset 0xFA2, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bSampleGravity; // offset 0xFA3, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0FA4[0x4]; // offset 0xFA4
    CPerParticleVecInput m_vecGravityForce; // offset 0xFA8, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bUseBasicMovementGravity; // offset 0x1680, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1681[0x7]; // offset 0x1681
    CPerParticleFloatInput m_flLocalGravityScale; // offset 0x1688, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flLocalBuoyancyScale; // offset 0x1800, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vecBuoyancyForce; // offset 0x1978, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
