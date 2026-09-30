#pragma once

class C_OP_MultiSegmentDisplaySnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1A18, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    ParticleMultiSegmentCountSelection_t m_nSegCount; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    ParticleMultiSegmentInputSelection_t m_nInputType; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
    CUtlString m_strDefaultString; // offset 0x1F8, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flValue; // offset 0x200, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flScollOffset; // offset 0x378, size 0x178, align 8 | MPropertyFriendlyName
    CUtlVector< ParticleMultiSegmentSpecialCharacter_t > m_SpecialCharList; // offset 0x4F0, size 0x18, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecColorUnlit; // offset 0x508, size 0x6D8, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecColorLit; // offset 0xBE0, size 0x6D8, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadius; // offset 0x12B8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSpacing; // offset 0x1430, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMinCount; // offset 0x15A8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxCount; // offset 0x1720, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bPrependEmpty; // offset 0x1898, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1899[0x7]; // offset 0x1899
    CParticleCollectionFloatInput m_flDigitsAfterDecimal; // offset 0x18A0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
