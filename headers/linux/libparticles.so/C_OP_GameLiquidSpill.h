#pragma once

class C_OP_GameLiquidSpill : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CParticleCollectionFloatInput m_flLiquidContentsField; // offset 0x220, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flExpirationTime; // offset 0x388, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadius; // offset 0x4F0, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bCheckExposedToSky; // offset 0x658, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0659[0x3]; // offset 0x659
    ParticleAttributeIndex_t m_nAmountAttribute; // offset 0x65C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
