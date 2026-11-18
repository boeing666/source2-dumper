#pragma once

class C_OP_RenderStandardLight : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x17A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    ParticleLightTypeChoiceList_t m_nLightType; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName
    uint16 m_nMaxAllowed; // offset 0x224, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0226[0x2]; // offset 0x226
    CParticleCollectionVecInput m_vecColorScale; // offset 0x228, size 0x6B0, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_08DC[0x4]; // offset 0x8DC
    CUtlString m_strLightStyle; // offset 0x8E0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8E8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flIntensity; // offset 0xA58, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xBC8, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xBC9, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0BCA[0x6]; // offset 0xBCA
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xBD0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flTheta; // offset 0xD40, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flPhi; // offset 0xEB0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flRadiusMultiplier; // offset 0x1020, size 0x170, align 8 | MPropertyFriendlyName
    StandardLightingAttenuationStyle_t m_nAttenuationStyle; // offset 0x1190, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_1194[0x4]; // offset 0x1194
    CParticleCollectionFloatInput m_flFalloffLinearity; // offset 0x1198, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flFiftyPercentFalloff; // offset 0x1308, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flZeroPercentFalloff; // offset 0x1478, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRenderDiffuse; // offset 0x15E8, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRenderSpecular; // offset 0x15E9, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_15EA[0x6]; // offset 0x15EA
    CUtlString m_lightCookie; // offset 0x15F0, size 0x8, align 8 | MPropertyFriendlyName
    int32 m_nPriority; // offset 0x15F8, size 0x4, align 4 | MPropertyFriendlyName
    ParticleLightFogLightingMode_t m_nFogLightingMode; // offset 0x15FC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flFogContribution; // offset 0x1600, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // offset 0x1770, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCapsuleLength; // offset 0x1774, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySuppressExpr
    bool m_bReverseOrder; // offset 0x1778, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bClosedLoop; // offset 0x1779, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_177A[0x2]; // offset 0x177A
    ParticleAttributeIndex_t m_nPrevPntSource; // offset 0x177C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flMaxLength; // offset 0x1780, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMinLength; // offset 0x1784, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bIgnoreDT; // offset 0x1788, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1789[0x3]; // offset 0x1789
    float32 m_flConstrainRadiusToLengthRatio; // offset 0x178C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flLengthScale; // offset 0x1790, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flLengthFadeInTime; // offset 0x1794, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1798[0x8]; // offset 0x1798
};
