#pragma once

class C_OP_RenderCables : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x15A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x230, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x3A8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionVecInput m_vecColorScale; // offset 0x520, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xBF8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0BFC[0x4]; // offset 0xBFC
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xC00, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeEditor
    TextureRepetitionMode_t m_nTextureRepetitionMode; // offset 0xC08, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0C0C[0x4]; // offset 0xC0C
    CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // offset 0xC10, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // offset 0xD88, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetV; // offset 0xF00, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetU; // offset 0x1078, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetV; // offset 0x11F0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetU; // offset 0x1368, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bDrawCableCaps; // offset 0x14E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_14E1[0x3]; // offset 0x14E1
    float32 m_flCapRoundness; // offset 0x14E4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flCapOffsetAmount; // offset 0x14E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTessScale; // offset 0x14EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMinTesselation; // offset 0x14F0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxTesselation; // offset 0x14F4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRoundness; // offset 0x14F8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_nForceRoundnessFixed; // offset 0x14FC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x14FD, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_14FE[0x2]; // offset 0x14FE
    CParticleTransformInput m_LightingTransform; // offset 0x1500, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    CUtlLeanVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // offset 0x1568, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_1578[0x10]; // offset 0x1578
    CUtlLeanVector< VecInputMaterialVariable_t > m_MaterialVecVars; // offset 0x1588, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_1598[0x10]; // offset 0x1598
};
