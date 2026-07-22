#pragma once

class C_OP_MultiSegmentDisplaySnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1998, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleMultiSegmentCountSelection_t m_nSegCount; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleMultiSegmentInputSelection_t m_nInputType; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CUtlString m_strDefaultString; // offset 0x1F0, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flValue; // offset 0x1F8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flScollOffset; // offset 0x368, size 0x170, align 8 | MPropertyFriendlyName
    CUtlVector< ParticleMultiSegmentSpecialCharacter_t > m_SpecialCharList; // offset 0x4D8, size 0x18, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecColorUnlit; // offset 0x4F0, size 0x6B8, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecColorLit; // offset 0xBA8, size 0x6B8, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadius; // offset 0x1260, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSpacing; // offset 0x13D0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMinCount; // offset 0x1540, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxCount; // offset 0x16B0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bPrependEmpty; // offset 0x1820, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1821[0x7]; // offset 0x1821
    CParticleCollectionFloatInput m_flDigitsAfterDecimal; // offset 0x1828, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
