#pragma once

class C_BaseModelEntity : public C_BaseEntity /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CRenderComponent* m_CRenderComponent; // offset 0x5F0, size 0x8, align 8 | MNotSaved
    CHitboxComponent m_CHitboxComponent; // offset 0x5F8, size 0x18, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CChoreoComponent* m_pChoreoComponent; // offset 0x610, size 0x8, align 8 | MNetworkEnable MPtrAutoallocate MNetworkChangePointerCallback
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // offset 0x618, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // offset 0x61C, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // offset 0x620, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // offset 0x624, size 0x4, align 4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // offset 0x628, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed0_PartIndex; // offset 0x62C, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed1_PartIndex; // offset 0x630, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed2_PartIndex; // offset 0x634, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed3_PartIndex; // offset 0x638, size 0x4, align 4
    int32 m_nDestructiblePartInitialStateDestructed4_PartIndex; // offset 0x63C, size 0x4, align 4
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // offset 0x640, size 0x8, align 8 | MNetworkEnable MPtrAutoallocate MNetworkTypeAlias
    char _pad_0648[0x18]; // offset 0x648
    bool m_bInitModelEffects; // offset 0x660, size 0x1, align 1 | MNotSaved
    bool m_bDoingModelEffects; // offset 0x661, size 0x1, align 1 | MNotSaved
    bool m_bIsStaticProp; // offset 0x662, size 0x1, align 1 | MNotSaved
    char _pad_0663[0x1]; // offset 0x663
    int32 m_iOldHealth; // offset 0x664, size 0x4, align 4 | MNotSaved
    RenderMode_t m_nRenderMode; // offset 0x668, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    RenderFx_t m_nRenderFX; // offset 0x669, size 0x1, align 1 | MNetworkEnable
    char _pad_066A[0x6]; // offset 0x66A
    CUtlString m_szAddModifier; // offset 0x670, size 0x8, align 8
    bool m_bAllowFadeInView; // offset 0x678, size 0x1, align 1
    char _pad_0679[0x1F]; // offset 0x679
    bool m_bHasCollision; // offset 0x698, size 0x1, align 1
    char _pad_0699[0x3]; // offset 0x699
    VectorWS m_vSupport; // offset 0x69C, size 0xC, align 4
    Color m_clrRender; // offset 0x6A8, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_06AC[0x4]; // offset 0x6AC
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // offset 0x6B0, size 0x68, align 8 | MNetworkEnable MNetworkChangeCallback
    char _pad_0718[0x18]; // offset 0x718
    bool m_bRenderToCubemaps; // offset 0x730, size 0x1, align 1 | MNetworkEnable
    bool m_bNoInterpolate; // offset 0x731, size 0x1, align 1 | MNetworkEnable
    char _pad_0732[0x6]; // offset 0x732
    CCollisionProperty m_Collision; // offset 0x738, size 0xB8, align 255 | MNetworkEnable
    CGlowProperty m_Glow; // offset 0x7F0, size 0x58, align 255 | MNetworkEnable
    float32 m_flGlowBackfaceMult; // offset 0x848, size 0x4, align 4 | MNetworkEnable
    float32 m_fadeMinDist; // offset 0x84C, size 0x4, align 4 | MNetworkEnable
    float32 m_fadeMaxDist; // offset 0x850, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeScale; // offset 0x854, size 0x4, align 4 | MNetworkEnable
    float32 m_flShadowStrength; // offset 0x858, size 0x4, align 4 | MNetworkEnable
    uint8 m_nObjectCulling; // offset 0x85C, size 0x1, align 1 | MNetworkEnable
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // offset 0x85D, size 0x1, align 1
    char _pad_085E[0x2]; // offset 0x85E
    CUtlOrderedMap< CGlobalSymbol, int32 > m_bodyGroupChoices; // offset 0x860, size 0x28, align 8
    CNetworkViewOffsetVector m_vecViewOffset; // offset 0x888, size 0x28, align 255 | MNetworkEnable MNetworkPriority MNetworkUserGroup MNetworkChangeCallback
    char _pad_08B0[0xB8]; // offset 0x8B0
    CClientAlphaProperty* m_pClientAlphaProperty; // offset 0x968, size 0x8, align 8 | MNotSaved
    Color m_ClientOverrideTint; // offset 0x970, size 0x4, align 1 | MNotSaved
    bool m_bUseClientOverrideTint; // offset 0x974, size 0x1, align 1 | MNotSaved
    char _pad_0975[0x23]; // offset 0x975
    uint32[1] m_bvDisabledHitGroups; // offset 0x998, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MSaveOpsForField
    char _pad_099C[0xC]; // offset 0x99C
};
