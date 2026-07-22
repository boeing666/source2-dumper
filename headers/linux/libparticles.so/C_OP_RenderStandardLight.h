#pragma once

class C_OP_RenderStandardLight : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1730, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21C]; // offset 0x0
    ParticleLightTypeChoiceList_t m_nLightType; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    uint16 m_nMaxAllowed; // offset 0x220, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0222[0x6]; // offset 0x222
    CParticleCollectionVecInput m_vecColorScale; // offset 0x228, size 0x690, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8B8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_08BC[0x4]; // offset 0x8BC
    CUtlString m_strLightStyle; // offset 0x8C0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8C8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flIntensity; // offset 0xA30, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xB98, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xB99, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0B9A[0x6]; // offset 0xB9A
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xBA0, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flTheta; // offset 0xD08, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flPhi; // offset 0xE70, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flRadiusMultiplier; // offset 0xFD8, size 0x168, align 8 | MPropertyFriendlyName
    StandardLightingAttenuationStyle_t m_nAttenuationStyle; // offset 0x1140, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_1144[0x4]; // offset 0x1144
    CParticleCollectionFloatInput m_flFalloffLinearity; // offset 0x1148, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flFiftyPercentFalloff; // offset 0x12B0, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flZeroPercentFalloff; // offset 0x1418, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRenderDiffuse; // offset 0x1580, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRenderSpecular; // offset 0x1581, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1582[0x6]; // offset 0x1582
    CUtlString m_lightCookie; // offset 0x1588, size 0x8, align 8 | MPropertyFriendlyName
    int32 m_nPriority; // offset 0x1590, size 0x4, align 4 | MPropertyFriendlyName
    ParticleLightFogLightingMode_t m_nFogLightingMode; // offset 0x1594, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flFogContribution; // offset 0x1598, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // offset 0x1700, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCapsuleLength; // offset 0x1704, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySuppressExpr
    bool m_bReverseOrder; // offset 0x1708, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bClosedLoop; // offset 0x1709, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_170A[0x2]; // offset 0x170A
    ParticleAttributeIndex_t m_nPrevPntSource; // offset 0x170C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flMaxLength; // offset 0x1710, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMinLength; // offset 0x1714, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bIgnoreDT; // offset 0x1718, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1719[0x3]; // offset 0x1719
    float32 m_flConstrainRadiusToLengthRatio; // offset 0x171C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flLengthScale; // offset 0x1720, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flLengthFadeInTime; // offset 0x1724, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1728[0x8]; // offset 0x1728
};
