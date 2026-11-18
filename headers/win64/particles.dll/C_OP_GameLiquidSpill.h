#pragma once

class C_OP_GameLiquidSpill : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x698, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CParticleCollectionFloatInput m_flLiquidContentsField; // offset 0x228, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flExpirationTime; // offset 0x3A0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadius; // offset 0x518, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bCheckExposedToSky; // offset 0x690, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0691[0x3]; // offset 0x691
    ParticleAttributeIndex_t m_nAmountAttribute; // offset 0x694, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
