#pragma once

class C_OP_RenderCables : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1528, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x220, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x390, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionVecInput m_vecColorScale; // offset 0x500, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xBB0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0BB4[0x4]; // offset 0xBB4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xBB8, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeEditor
    TextureRepetitionMode_t m_nTextureRepetitionMode; // offset 0xBC0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0BC4[0x4]; // offset 0xBC4
    CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // offset 0xBC8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // offset 0xD38, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetV; // offset 0xEA8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetU; // offset 0x1018, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetV; // offset 0x1188, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetU; // offset 0x12F8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bDrawCableCaps; // offset 0x1468, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1469[0x3]; // offset 0x1469
    float32 m_flCapRoundness; // offset 0x146C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flCapOffsetAmount; // offset 0x1470, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTessScale; // offset 0x1474, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMinTesselation; // offset 0x1478, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxTesselation; // offset 0x147C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRoundness; // offset 0x1480, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_nForceRoundnessFixed; // offset 0x1484, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x1485, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1486[0x2]; // offset 0x1486
    CParticleTransformInput m_LightingTransform; // offset 0x1488, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    CUtlLeanVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // offset 0x14E8, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_14F8[0x10]; // offset 0x14F8
    CUtlLeanVector< VecInputMaterialVariable_t > m_MaterialVecVars; // offset 0x1508, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_1518[0x10]; // offset 0x1518
};
