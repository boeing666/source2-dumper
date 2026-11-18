#pragma once

class C_OP_RenderCables : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x15A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x228, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x3A0, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionVecInput m_vecColorScale; // offset 0x518, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xBF0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0BF4[0x4]; // offset 0xBF4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xBF8, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeEditor
    TextureRepetitionMode_t m_nTextureRepetitionMode; // offset 0xC00, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0C04[0x4]; // offset 0xC04
    CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // offset 0xC08, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // offset 0xD80, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetV; // offset 0xEF8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetU; // offset 0x1070, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetV; // offset 0x11E8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetU; // offset 0x1360, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bDrawCableCaps; // offset 0x14D8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_14D9[0x3]; // offset 0x14D9
    float32 m_flCapRoundness; // offset 0x14DC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flCapOffsetAmount; // offset 0x14E0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTessScale; // offset 0x14E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMinTesselation; // offset 0x14E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxTesselation; // offset 0x14EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRoundness; // offset 0x14F0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_nForceRoundnessFixed; // offset 0x14F4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x14F5, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_14F6[0x2]; // offset 0x14F6
    CParticleTransformInput m_LightingTransform; // offset 0x14F8, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    CUtlLeanVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // offset 0x1560, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_1570[0x10]; // offset 0x1570
    CUtlLeanVector< VecInputMaterialVariable_t > m_MaterialVecVars; // offset 0x1580, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_1590[0x10]; // offset 0x1590
};
