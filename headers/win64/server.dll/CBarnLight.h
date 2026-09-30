#pragma once

class CBarnLight : public CBaseModelEntity /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x878]; // offset 0x0
    bool m_bEnabled; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x3]; // offset 0x879
    int32 m_nColorMode; // offset 0x87C, size 0x4, align 4
    Color m_Color; // offset 0x880, size 0x4, align 4
    float32 m_flColorTemperature; // offset 0x884, size 0x4, align 4
    float32 m_flBrightness; // offset 0x888, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x88C, size 0x4, align 4
    int32 m_nDirectLight; // offset 0x890, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0x894, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0x898, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0x89C, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0x8A0, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0x8A4, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0x8A8, size 0x4, align 4
    char _pad_08AC[0x4]; // offset 0x8AC
    CUtlString m_LightStyleString; // offset 0x8B0, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0x8B8, size 0x4, align 255
    char _pad_08BC[0x4]; // offset 0x8BC
    CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0x8C0, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0x8D8, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // offset 0x8F0, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0x908, size 0x60, align 8
    char _pad_0968[0x20]; // offset 0x968
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x988, size 0x8, align 8
    float32 m_flShape; // offset 0x990, size 0x4, align 4
    float32 m_flSoftX; // offset 0x994, size 0x4, align 4
    float32 m_flSoftY; // offset 0x998, size 0x4, align 4
    float32 m_flSkirt; // offset 0x99C, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0x9A0, size 0x4, align 4
    Vector m_vSizeParams; // offset 0x9A4, size 0xC, align 4
    float32 m_flRange; // offset 0x9B0, size 0x4, align 4
    Vector m_vShear; // offset 0x9B4, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0x9C0, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0x9C4, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0x9D0, size 0x4, align 4
    int32 m_nCastShadows; // offset 0x9D4, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0x9D8, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0x9DC, size 0x4, align 4
    bool m_bContactShadow; // offset 0x9E0, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0x9E1, size 0x1, align 1
    char _pad_09E2[0x2]; // offset 0x9E2
    int32 m_nBounceLight; // offset 0x9E4, size 0x4, align 4
    float32 m_flBounceScale; // offset 0x9E8, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0x9EC, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0x9F0, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0x9FC, size 0x4, align 4
    int32 m_nFog; // offset 0xA00, size 0x4, align 4
    float32 m_flFogStrength; // offset 0xA04, size 0x4, align 4
    int32 m_nFogShadows; // offset 0xA08, size 0x4, align 4
    float32 m_flFogScale; // offset 0xA0C, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0xA10, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0xA14, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0xA18, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0xA1C, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0xA20, size 0x1, align 1
    char _pad_0A21[0x3]; // offset 0xA21
    Vector m_vPrecomputedBoundsMins; // offset 0xA24, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0xA30, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0xA3C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0xA48, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0xA54, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0xA60, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0xA64, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0xA70, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0xA7C, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0xA88, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0xA94, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0xAA0, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0xAAC, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0xAB8, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0xAC4, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0xAD0, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0xADC, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0xAE8, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0xAF4, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0xB00, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0xB0C, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0xB18, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0xB24, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0xB30, size 0xC, align 4
    bool m_bPvsModifyEntity; // offset 0xB3C, size 0x1, align 1
    bool m_bTransmitAlways; // offset 0xB3D, size 0x1, align 1
    char _pad_0B3E[0x2]; // offset 0xB3E
    CNetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0xB40, size 0x18, align 8
    char _pad_0B58[0x8]; // offset 0xB58
};
