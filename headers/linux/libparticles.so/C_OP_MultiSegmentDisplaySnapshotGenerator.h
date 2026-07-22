#pragma once

class C_OP_MultiSegmentDisplaySnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1900, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleMultiSegmentCountSelection_t m_nSegCount; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    ParticleMultiSegmentInputSelection_t m_nInputType; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_strDefaultString; // offset 0x1E0, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flValue; // offset 0x1E8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flScollOffset; // offset 0x350, size 0x168, align 8 | MPropertyFriendlyName
    CUtlVector< ParticleMultiSegmentSpecialCharacter_t > m_SpecialCharList; // offset 0x4B8, size 0x18, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecColorUnlit; // offset 0x4D0, size 0x690, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecColorLit; // offset 0xB60, size 0x690, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadius; // offset 0x11F0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSpacing; // offset 0x1358, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMinCount; // offset 0x14C0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxCount; // offset 0x1628, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bPrependEmpty; // offset 0x1790, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1791[0x7]; // offset 0x1791
    CParticleCollectionFloatInput m_flDigitsAfterDecimal; // offset 0x1798, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
