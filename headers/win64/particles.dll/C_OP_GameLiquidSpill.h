#pragma once

class C_OP_GameLiquidSpill : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CParticleCollectionFloatInput m_flLiquidContentsField; // offset 0x228, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flExpirationTime; // offset 0x398, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadius; // offset 0x508, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bCheckExposedToSky; // offset 0x678, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0679[0x3]; // offset 0x679
    ParticleAttributeIndex_t m_nAmountAttribute; // offset 0x67C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
