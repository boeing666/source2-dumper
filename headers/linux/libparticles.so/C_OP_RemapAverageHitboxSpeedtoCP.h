#pragma once

class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0xEA0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nInControlPointNumber; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nField; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleHitboxDataSelection_t m_nHitboxDataType; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionFloatInput m_flInputMin; // offset 0x1E8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInputMax; // offset 0x350, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMin; // offset 0x4B8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMax; // offset 0x620, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nHeightControlPointNumber; // offset 0x788, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_078C[0x4]; // offset 0x78C
    CParticleCollectionVecInput m_vecComparisonVelocity; // offset 0x790, size 0x690, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    char[128] m_HitboxSetName; // offset 0xE20, size 0x80, align 1 | MPropertyFriendlyName
};
