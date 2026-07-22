#pragma once

class C_OP_RenderStandardLight : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x14C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    ParticleLightTypeChoiceList_t m_nLightType; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_022C[0x4]; // offset 0x22C
    CParticleCollectionVecInput m_vecColorScale; // offset 0x230, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_08EC[0x4]; // offset 0x8EC
    CPerParticleFloatInput m_flIntensity; // offset 0x8F0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xA60, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0A61[0x7]; // offset 0xA61
    CParticleCollectionFloatInput m_flTheta; // offset 0xA68, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flPhi; // offset 0xBD8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flRadiusMultiplier; // offset 0xD48, size 0x170, align 8 | MPropertyFriendlyName
    StandardLightingAttenuationStyle_t m_nAttenuationStyle; // offset 0xEB8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0EBC[0x4]; // offset 0xEBC
    CParticleCollectionFloatInput m_flFalloffLinearity; // offset 0xEC0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flFiftyPercentFalloff; // offset 0x1030, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flZeroPercentFalloff; // offset 0x11A0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRenderDiffuse; // offset 0x1310, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRenderSpecular; // offset 0x1311, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1312[0x6]; // offset 0x1312
    CUtlString m_lightCookie; // offset 0x1318, size 0x8, align 8 | MPropertyFriendlyName
    int32 m_nPriority; // offset 0x1320, size 0x4, align 4 | MPropertyFriendlyName
    ParticleLightFogLightingMode_t m_nFogLightingMode; // offset 0x1324, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flFogContribution; // offset 0x1328, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // offset 0x1498, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCapsuleLength; // offset 0x149C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySuppressExpr
    bool m_bReverseOrder; // offset 0x14A0, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bClosedLoop; // offset 0x14A1, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_14A2[0x2]; // offset 0x14A2
    ParticleAttributeIndex_t m_nPrevPntSource; // offset 0x14A4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flMaxLength; // offset 0x14A8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMinLength; // offset 0x14AC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bIgnoreDT; // offset 0x14B0, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_14B1[0x3]; // offset 0x14B1
    float32 m_flConstrainRadiusToLengthRatio; // offset 0x14B4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flLengthScale; // offset 0x14B8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flLengthFadeInTime; // offset 0x14BC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_14C0[0x8]; // offset 0x14C0
};
