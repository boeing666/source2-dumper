#pragma once

class C_OP_RenderCables : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x14C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x220, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x388, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionVecInput m_vecColorScale; // offset 0x4F0, size 0x690, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xB80, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0B84[0x4]; // offset 0xB84
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xB88, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeEditor
    TextureRepetitionMode_t m_nTextureRepetitionMode; // offset 0xB90, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0B94[0x4]; // offset 0xB94
    CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // offset 0xB98, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // offset 0xD00, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetV; // offset 0xE68, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetU; // offset 0xFD0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetV; // offset 0x1138, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetU; // offset 0x12A0, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bDrawCableCaps; // offset 0x1408, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1409[0x3]; // offset 0x1409
    float32 m_flCapRoundness; // offset 0x140C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flCapOffsetAmount; // offset 0x1410, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTessScale; // offset 0x1414, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMinTesselation; // offset 0x1418, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxTesselation; // offset 0x141C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRoundness; // offset 0x1420, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_nForceRoundnessFixed; // offset 0x1424, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x1425, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1426[0x2]; // offset 0x1426
    CParticleTransformInput m_LightingTransform; // offset 0x1428, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    CUtlLeanVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // offset 0x1488, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_1498[0x10]; // offset 0x1498
    CUtlLeanVector< VecInputMaterialVariable_t > m_MaterialVecVars; // offset 0x14A8, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_14B8[0x10]; // offset 0x14B8
};
