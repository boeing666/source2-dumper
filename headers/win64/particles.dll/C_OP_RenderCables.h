#pragma once

class C_OP_RenderCables : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1540, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CParticleCollectionFloatInput m_flRadiusScale; // offset 0x228, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionFloatInput m_flAlphaScale; // offset 0x398, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionVecInput m_vecColorScale; // offset 0x508, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySortPriority
    ParticleColorBlendType_t m_nColorBlendType; // offset 0xBC0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0BC4[0x4]; // offset 0xBC4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xBC8, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeEditor
    TextureRepetitionMode_t m_nTextureRepetitionMode; // offset 0xBD0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0BD4[0x4]; // offset 0xBD4
    CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // offset 0xBD8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // offset 0xD48, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetV; // offset 0xEB8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flColorMapOffsetU; // offset 0x1028, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetV; // offset 0x1198, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNormalMapOffsetU; // offset 0x1308, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bDrawCableCaps; // offset 0x1478, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1479[0x3]; // offset 0x1479
    float32 m_flCapRoundness; // offset 0x147C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flCapOffsetAmount; // offset 0x1480, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flTessScale; // offset 0x1484, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMinTesselation; // offset 0x1488, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxTesselation; // offset 0x148C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nRoundness; // offset 0x1490, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_nForceRoundnessFixed; // offset 0x1494, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOnlyRenderInEffectsBloomPass; // offset 0x1495, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_1496[0x2]; // offset 0x1496
    CParticleTransformInput m_LightingTransform; // offset 0x1498, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    CUtlLeanVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // offset 0x1500, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_1510[0x10]; // offset 0x1510
    CUtlLeanVector< VecInputMaterialVariable_t > m_MaterialVecVars; // offset 0x1520, size 0x10, align 8 | MPropertyFriendlyName
    char _pad_1530[0x10]; // offset 0x1530
};
