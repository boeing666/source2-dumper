#pragma once

class C_OP_RenderVolumetricEmitter : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2128, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CUtlString m_strChannelType; // offset 0x220, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    ParticleVolumetricSmokeType_t m_nType; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    ParticleVolumetricSmokeCreationType_t m_nCreationType; // offset 0x22C, size 0x4, align 4 | MPropertyFriendlyName
    EventTypeSelection_t m_nEventType; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0234[0x4]; // offset 0x234
    CPerParticleVecInput m_vecPos; // offset 0x238, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecVelocity; // offset 0x8C8, size 0x690, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vPrevPosition; // offset 0xF58, size 0x690, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flSpeed; // offset 0x15E8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRadius; // offset 0x1750, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDensity; // offset 0x18B8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flTemperature; // offset 0x1A20, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flMagnitude; // offset 0x1B88, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flKillRadius; // offset 0x1CF0, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flKillDensityScale; // offset 0x1E58, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flFalloff; // offset 0x1FC0, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
