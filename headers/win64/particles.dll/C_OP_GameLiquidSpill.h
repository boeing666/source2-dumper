#pragma once

class C_OP_GameLiquidSpill : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x510, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CParticleCollectionFloatInput m_flLiquidContentsField; // offset 0x228, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flExpirationTime; // offset 0x398, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nAmountAttribute; // offset 0x508, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_050C[0x4]; // offset 0x50C
};
