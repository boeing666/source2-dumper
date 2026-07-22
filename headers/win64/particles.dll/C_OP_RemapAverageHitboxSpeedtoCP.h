#pragma once

class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0xEF0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nInControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutControlPointNumber; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nField; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleHitboxDataSelection_t m_nHitboxDataType; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInputMin; // offset 0x1F0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInputMax; // offset 0x360, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMin; // offset 0x4D0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMax; // offset 0x640, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nHeightControlPointNumber; // offset 0x7B0, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_07B4[0x4]; // offset 0x7B4
    CParticleCollectionVecInput m_vecComparisonVelocity; // offset 0x7B8, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    char[128] m_HitboxSetName; // offset 0xE70, size 0x80, align 1 | MPropertyFriendlyName
};
