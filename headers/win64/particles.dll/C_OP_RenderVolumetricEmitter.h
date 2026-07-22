#pragma once

class C_OP_RenderVolumetricEmitter : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1CA0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CUtlString m_strSmokeType; // offset 0x228, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    ParticleVolumetricSmokeType_t m_nType; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName
    ParticleVolumetricSmokeCreationType_t m_nCreationType; // offset 0x234, size 0x4, align 4 | MPropertyFriendlyName
    EventTypeSelection_t m_nEventType; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_023C[0x4]; // offset 0x23C
    CPerParticleVecInput m_vecPos; // offset 0x240, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecVelocity; // offset 0x8F8, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRadius; // offset 0xFB0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDensity; // offset 0x1120, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTemperature; // offset 0x1290, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flFuel; // offset 0x1400, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDust; // offset 0x1570, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flLifespan; // offset 0x16E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMagnitude; // offset 0x1850, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flKillRadius; // offset 0x19C0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flFalloff; // offset 0x1B30, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
