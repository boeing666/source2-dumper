#pragma once

class CLightComponent : public CEntityComponent /*0x0*/  // sizeof 0x1B8, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x38, size 0x28, align 255 | MNotSaved
    char _pad_0060[0x15]; // offset 0x60
    Color m_Color; // offset 0x75, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    Color m_SecondaryColor; // offset 0x79, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_007D[0x3]; // offset 0x7D
    float32 m_flBrightness; // offset 0x80, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flBrightnessScale; // offset 0x84, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flBrightnessMult; // offset 0x88, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flRange; // offset 0x8C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFalloff; // offset 0x90, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flAttenuation0; // offset 0x94, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flAttenuation1; // offset 0x98, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flAttenuation2; // offset 0x9C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flTheta; // offset 0xA0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flPhi; // offset 0xA4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0xA8, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    int32 m_nCascades; // offset 0xB0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nCastShadows; // offset 0xB4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nShadowWidth; // offset 0xB8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nShadowHeight; // offset 0xBC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bRenderDiffuse; // offset 0xC0, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_00C1[0x3]; // offset 0xC1
    int32 m_nRenderSpecular; // offset 0xC4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bRenderTransmissive; // offset 0xC8, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_00C9[0x3]; // offset 0xC9
    float32 m_flOrthoLightWidth; // offset 0xCC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flOrthoLightHeight; // offset 0xD0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nStyle; // offset 0xD4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    CUtlString m_Pattern; // offset 0xD8, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    int32 m_nCascadeRenderStaticObjects; // offset 0xE0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowCascadeCrossFade; // offset 0xE4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowCascadeDistanceFade; // offset 0xE8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowCascadeDistance0; // offset 0xEC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowCascadeDistance1; // offset 0xF0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowCascadeDistance2; // offset 0xF4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowCascadeDistance3; // offset 0xF8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nShadowCascadeResolution0; // offset 0xFC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nShadowCascadeResolution1; // offset 0x100, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nShadowCascadeResolution2; // offset 0x104, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nShadowCascadeResolution3; // offset 0x108, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bUsesBakedShadowing; // offset 0x10C, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNetworkAlias
    char _pad_010D[0x3]; // offset 0x10D
    int32 m_nShadowPriority; // offset 0x110, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nBakedShadowIndex; // offset 0x114, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nLightPathUniqueId; // offset 0x118, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nLightMapUniqueId; // offset 0x11C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bRenderToCubemaps; // offset 0x120, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bAllowSSTGeneration; // offset 0x121, size 0x1, align 1 | MNetworkEnable
    char _pad_0122[0x2]; // offset 0x122
    int32 m_nDirectLight; // offset 0x124, size 0x4, align 4 | MNetworkEnable
    int32 m_nIndirectLight; // offset 0x128, size 0x4, align 4 | MNetworkEnable
    bool m_bDynamicBounce; // offset 0x12C, size 0x1, align 1 | MNetworkEnable
    char _pad_012D[0x3]; // offset 0x12D
    float32 m_flFadeMinDist; // offset 0x130, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFadeMaxDist; // offset 0x134, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowFadeMinDist; // offset 0x138, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowFadeMaxDist; // offset 0x13C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bEnabled; // offset 0x140, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bFlicker; // offset 0x141, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bPrecomputedFieldsValid; // offset 0x142, size 0x1, align 1 | MNetworkEnable
    char _pad_0143[0x1]; // offset 0x143
    Vector m_vPrecomputedBoundsMins; // offset 0x144, size 0xC, align 4 | MNetworkEnable
    Vector m_vPrecomputedBoundsMaxs; // offset 0x150, size 0xC, align 4 | MNetworkEnable
    Vector m_vPrecomputedOBBOrigin; // offset 0x15C, size 0xC, align 4 | MNetworkEnable
    QAngle m_vPrecomputedOBBAngles; // offset 0x168, size 0xC, align 4 | MNetworkEnable
    Vector m_vPrecomputedOBBExtent; // offset 0x174, size 0xC, align 4 | MNetworkEnable
    float32 m_flPrecomputedMaxRange; // offset 0x180, size 0x4, align 4 | MNetworkEnable
    int32 m_nFogLightingMode; // offset 0x184, size 0x4, align 4 | MNetworkEnable
    float32 m_flFogContributionStength; // offset 0x188, size 0x4, align 4 | MNetworkEnable
    float32 m_flNearClipPlane; // offset 0x18C, size 0x4, align 4 | MNetworkEnable
    Color m_SkyColor; // offset 0x190, size 0x4, align 1 | MNetworkEnable
    float32 m_flSkyIntensity; // offset 0x194, size 0x4, align 4 | MNetworkEnable
    Color m_SkyAmbientBounce; // offset 0x198, size 0x4, align 1 | MNetworkEnable
    bool m_bUseSecondaryColor; // offset 0x19C, size 0x1, align 1 | MNetworkEnable
    bool m_bMixedShadows; // offset 0x19D, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNotSaved
    char _pad_019E[0x2]; // offset 0x19E
    GameTime_t m_flLightStyleStartTime; // offset 0x1A0, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
    float32 m_flCapsuleLength; // offset 0x1A4, size 0x4, align 4 | MNetworkEnable
    float32 m_flMinRoughness; // offset 0x1A8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_01AC[0xC]; // offset 0x1AC
};
