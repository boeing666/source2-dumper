#pragma once

class CBarnLight : public CBaseModelEntity /*0x0*/  // sizeof 0xE10, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    bool m_bEnabled; // offset 0xB2C, size 0x1, align 1
    char _pad_0B2D[0x3]; // offset 0xB2D
    int32 m_nColorMode; // offset 0xB30, size 0x4, align 4
    Color m_Color; // offset 0xB34, size 0x4, align 4
    float32 m_flColorTemperature; // offset 0xB38, size 0x4, align 4
    float32 m_flBrightness; // offset 0xB3C, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xB40, size 0x4, align 4
    int32 m_nDirectLight; // offset 0xB44, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0xB48, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0xB4C, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0xB50, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0xB54, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0xB58, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0xB5C, size 0x4, align 4
    CUtlString m_LightStyleString; // offset 0xB60, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0xB68, size 0x4, align 255
    char _pad_0B6C[0x4]; // offset 0xB6C
    CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0xB70, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0xB88, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // offset 0xBA0, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0xBB8, size 0x60, align 8
    char _pad_0C18[0x20]; // offset 0xC18
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0xC38, size 0x8, align 8
    float32 m_flShape; // offset 0xC40, size 0x4, align 4
    float32 m_flSoftX; // offset 0xC44, size 0x4, align 4
    float32 m_flSoftY; // offset 0xC48, size 0x4, align 4
    float32 m_flSkirt; // offset 0xC4C, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0xC50, size 0x4, align 4
    Vector m_vSizeParams; // offset 0xC54, size 0xC, align 4
    float32 m_flRange; // offset 0xC60, size 0x4, align 4
    Vector m_vShear; // offset 0xC64, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0xC70, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0xC74, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0xC80, size 0x4, align 4
    int32 m_nCastShadows; // offset 0xC84, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0xC88, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0xC8C, size 0x4, align 4
    bool m_bContactShadow; // offset 0xC90, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0xC91, size 0x1, align 1
    char _pad_0C92[0x2]; // offset 0xC92
    int32 m_nBounceLight; // offset 0xC94, size 0x4, align 4
    float32 m_flBounceScale; // offset 0xC98, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0xC9C, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0xCA0, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0xCAC, size 0x4, align 4
    int32 m_nFog; // offset 0xCB0, size 0x4, align 4
    float32 m_flFogStrength; // offset 0xCB4, size 0x4, align 4
    int32 m_nFogShadows; // offset 0xCB8, size 0x4, align 4
    float32 m_flFogScale; // offset 0xCBC, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0xCC0, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0xCC4, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0xCC8, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0xCCC, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0xCD0, size 0x1, align 1
    char _pad_0CD1[0x3]; // offset 0xCD1
    Vector m_vPrecomputedBoundsMins; // offset 0xCD4, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0xCE0, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0xCEC, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0xCF8, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0xD04, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0xD10, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0xD14, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0xD20, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0xD2C, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0xD38, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0xD44, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0xD50, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0xD5C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0xD68, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0xD74, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0xD80, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0xD8C, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0xD98, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0xDA4, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0xDB0, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0xDBC, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0xDC8, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0xDD4, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0xDE0, size 0xC, align 4
    bool m_bPvsModifyEntity; // offset 0xDEC, size 0x1, align 1
    bool m_bTransmitAlways; // offset 0xDED, size 0x1, align 1
    char _pad_0DEE[0x2]; // offset 0xDEE
    CNetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0xDF0, size 0x18, align 8
    char _pad_0E08[0x8]; // offset 0xE08
};
