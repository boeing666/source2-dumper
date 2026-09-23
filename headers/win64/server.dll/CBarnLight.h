#pragma once

class CBarnLight : public CBaseModelEntity /*0x0*/  // sizeof 0xB38, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x850]; // offset 0x0
    bool m_bEnabled; // offset 0x850, size 0x1, align 1
    char _pad_0851[0x3]; // offset 0x851
    int32 m_nColorMode; // offset 0x854, size 0x4, align 4
    Color m_Color; // offset 0x858, size 0x4, align 4
    float32 m_flColorTemperature; // offset 0x85C, size 0x4, align 4
    float32 m_flBrightness; // offset 0x860, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x864, size 0x4, align 4
    int32 m_nDirectLight; // offset 0x868, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0x86C, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0x870, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0x874, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0x878, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0x87C, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
    CUtlString m_LightStyleString; // offset 0x888, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0x890, size 0x4, align 255
    char _pad_0894[0x4]; // offset 0x894
    CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0x898, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0x8B0, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // offset 0x8C8, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0x8E0, size 0x60, align 8
    char _pad_0940[0x20]; // offset 0x940
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x960, size 0x8, align 8
    float32 m_flShape; // offset 0x968, size 0x4, align 4
    float32 m_flSoftX; // offset 0x96C, size 0x4, align 4
    float32 m_flSoftY; // offset 0x970, size 0x4, align 4
    float32 m_flSkirt; // offset 0x974, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0x978, size 0x4, align 4
    Vector m_vSizeParams; // offset 0x97C, size 0xC, align 4
    float32 m_flRange; // offset 0x988, size 0x4, align 4
    Vector m_vShear; // offset 0x98C, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0x998, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0x99C, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0x9A8, size 0x4, align 4
    int32 m_nCastShadows; // offset 0x9AC, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0x9B0, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0x9B4, size 0x4, align 4
    bool m_bContactShadow; // offset 0x9B8, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0x9B9, size 0x1, align 1
    char _pad_09BA[0x2]; // offset 0x9BA
    int32 m_nBounceLight; // offset 0x9BC, size 0x4, align 4
    float32 m_flBounceScale; // offset 0x9C0, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0x9C4, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0x9C8, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0x9D4, size 0x4, align 4
    int32 m_nFog; // offset 0x9D8, size 0x4, align 4
    float32 m_flFogStrength; // offset 0x9DC, size 0x4, align 4
    int32 m_nFogShadows; // offset 0x9E0, size 0x4, align 4
    float32 m_flFogScale; // offset 0x9E4, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0x9E8, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0x9EC, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0x9F0, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0x9F4, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0x9F8, size 0x1, align 1
    char _pad_09F9[0x3]; // offset 0x9F9
    Vector m_vPrecomputedBoundsMins; // offset 0x9FC, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0xA08, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0xA14, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0xA20, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0xA2C, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0xA38, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0xA3C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0xA48, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0xA54, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0xA60, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0xA6C, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0xA78, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0xA84, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0xA90, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0xA9C, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0xAA8, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0xAB4, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0xAC0, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0xACC, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0xAD8, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0xAE4, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0xAF0, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0xAFC, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0xB08, size 0xC, align 4
    bool m_bPvsModifyEntity; // offset 0xB14, size 0x1, align 1
    bool m_bTransmitAlways; // offset 0xB15, size 0x1, align 1
    char _pad_0B16[0x2]; // offset 0xB16
    CNetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0xB18, size 0x18, align 8
    char _pad_0B30[0x8]; // offset 0xB30
};
