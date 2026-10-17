#pragma once

class C_OP_RenderVolumetricEmitter : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2290, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    CUtlString m_strChannelType; // offset 0x230, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySuppressExpr
    ParticleVolumetricSmokeType_t m_nType; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName
    ParticleVolumetricSmokeCreationType_t m_nCreationType; // offset 0x23C, size 0x4, align 4 | MPropertyFriendlyName
    EventTypeSelection_t m_nEventType; // offset 0x240, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0244[0x4]; // offset 0x244
    CPerParticleVecInput m_vecPos; // offset 0x248, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecVelocity; // offset 0x920, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vPrevPosition; // offset 0xFF8, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flSpeed; // offset 0x16D0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRadius; // offset 0x1848, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDensity; // offset 0x19C0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flTemperature; // offset 0x1B38, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flMagnitude; // offset 0x1CB0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flKillRadius; // offset 0x1E28, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flKillDensityScale; // offset 0x1FA0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flFalloff; // offset 0x2118, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
