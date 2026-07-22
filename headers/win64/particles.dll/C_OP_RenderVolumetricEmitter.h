#pragma once

class C_OP_RenderVolumetricEmitter : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x21E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CUtlString m_strChannelType; // offset 0x228, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    ParticleVolumetricSmokeType_t m_nType; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName
    ParticleVolumetricSmokeCreationType_t m_nCreationType; // offset 0x234, size 0x4, align 4 | MPropertyFriendlyName
    EventTypeSelection_t m_nEventType; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_023C[0x4]; // offset 0x23C
    CPerParticleVecInput m_vecPos; // offset 0x240, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecVelocity; // offset 0x8F8, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vPrevPosition; // offset 0xFB0, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flSpeed; // offset 0x1668, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRadius; // offset 0x17D8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDensity; // offset 0x1948, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flTemperature; // offset 0x1AB8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flMagnitude; // offset 0x1C28, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flKillRadius; // offset 0x1D98, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flKillDensityScale; // offset 0x1F08, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flFalloff; // offset 0x2078, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
