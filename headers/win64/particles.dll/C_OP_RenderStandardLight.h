#pragma once

class C_OP_RenderStandardLight : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1820, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    ParticleLightTypeChoiceList_t m_nLightType; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    uint16 m_nMaxAllowed; // offset 0x22C, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_022E[0x2]; // offset 0x22E
    CParticleCollectionVecInput m_vecColorScale; // offset 0x230, size 0x6D8, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x908, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_090C[0x4]; // offset 0x90C
    CUtlString m_strLightStyle; // offset 0x910, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x918, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flIntensity; // offset 0xA90, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xC08, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xC09, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0C0A[0x6]; // offset 0xC0A
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xC10, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flTheta; // offset 0xD88, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flPhi; // offset 0xF00, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flRadiusMultiplier; // offset 0x1078, size 0x178, align 8 | MPropertyFriendlyName
    StandardLightingAttenuationStyle_t m_nAttenuationStyle; // offset 0x11F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_11F4[0x4]; // offset 0x11F4
    CParticleCollectionFloatInput m_flFalloffLinearity; // offset 0x11F8, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flFiftyPercentFalloff; // offset 0x1370, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flZeroPercentFalloff; // offset 0x14E8, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRenderDiffuse; // offset 0x1660, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRenderSpecular; // offset 0x1661, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1662[0x6]; // offset 0x1662
    CUtlString m_lightCookie; // offset 0x1668, size 0x8, align 8 | MPropertyFriendlyName
    int32 m_nPriority; // offset 0x1670, size 0x4, align 4 | MPropertyFriendlyName
    ParticleLightFogLightingMode_t m_nFogLightingMode; // offset 0x1674, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flFogContribution; // offset 0x1678, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // offset 0x17F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCapsuleLength; // offset 0x17F4, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySuppressExpr
    bool m_bReverseOrder; // offset 0x17F8, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bClosedLoop; // offset 0x17F9, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_17FA[0x2]; // offset 0x17FA
    ParticleAttributeIndex_t m_nPrevPntSource; // offset 0x17FC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flMaxLength; // offset 0x1800, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMinLength; // offset 0x1804, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bIgnoreDT; // offset 0x1808, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1809[0x3]; // offset 0x1809
    float32 m_flConstrainRadiusToLengthRatio; // offset 0x180C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flLengthScale; // offset 0x1810, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flLengthFadeInTime; // offset 0x1814, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1818[0x8]; // offset 0x1818
};
