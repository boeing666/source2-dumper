#pragma once

class CBarnLight : public CBaseModelEntity /*0x0*/  // sizeof 0xD30, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    bool m_bEnabled; // offset 0xA4C, size 0x1, align 1
    char _pad_0A4D[0x3]; // offset 0xA4D
    int32 m_nColorMode; // offset 0xA50, size 0x4, align 4
    Color m_Color; // offset 0xA54, size 0x4, align 1
    float32 m_flColorTemperature; // offset 0xA58, size 0x4, align 4
    float32 m_flBrightness; // offset 0xA5C, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xA60, size 0x4, align 4
    int32 m_nDirectLight; // offset 0xA64, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0xA68, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0xA6C, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0xA70, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0xA74, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0xA78, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0xA7C, size 0x4, align 4
    CUtlString m_LightStyleString; // offset 0xA80, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0xA88, size 0x4, align 255
    char _pad_0A8C[0x4]; // offset 0xA8C
    CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0xA90, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0xAA8, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // offset 0xAC0, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0xAD8, size 0x60, align 8
    char _pad_0B38[0x20]; // offset 0xB38
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0xB58, size 0x8, align 8
    float32 m_flShape; // offset 0xB60, size 0x4, align 4
    float32 m_flSoftX; // offset 0xB64, size 0x4, align 4
    float32 m_flSoftY; // offset 0xB68, size 0x4, align 4
    float32 m_flSkirt; // offset 0xB6C, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0xB70, size 0x4, align 4
    Vector m_vSizeParams; // offset 0xB74, size 0xC, align 4
    float32 m_flRange; // offset 0xB80, size 0x4, align 4
    Vector m_vShear; // offset 0xB84, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0xB90, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0xB94, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0xBA0, size 0x4, align 4
    int32 m_nCastShadows; // offset 0xBA4, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0xBA8, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0xBAC, size 0x4, align 4
    bool m_bContactShadow; // offset 0xBB0, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0xBB1, size 0x1, align 1
    char _pad_0BB2[0x2]; // offset 0xBB2
    int32 m_nBounceLight; // offset 0xBB4, size 0x4, align 4
    float32 m_flBounceScale; // offset 0xBB8, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0xBBC, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0xBC0, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0xBCC, size 0x4, align 4
    int32 m_nFog; // offset 0xBD0, size 0x4, align 4
    float32 m_flFogStrength; // offset 0xBD4, size 0x4, align 4
    int32 m_nFogShadows; // offset 0xBD8, size 0x4, align 4
    float32 m_flFogScale; // offset 0xBDC, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0xBE0, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0xBE4, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0xBE8, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0xBEC, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0xBF0, size 0x1, align 1
    char _pad_0BF1[0x3]; // offset 0xBF1
    Vector m_vPrecomputedBoundsMins; // offset 0xBF4, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0xC00, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0xC0C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0xC18, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0xC24, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0xC30, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0xC34, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0xC40, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0xC4C, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0xC58, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0xC64, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0xC70, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0xC7C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0xC88, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0xC94, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0xCA0, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0xCAC, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0xCB8, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0xCC4, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0xCD0, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0xCDC, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0xCE8, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0xCF4, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0xD00, size 0xC, align 4
    bool m_bPvsModifyEntity; // offset 0xD0C, size 0x1, align 1
    bool m_bTransmitAlways; // offset 0xD0D, size 0x1, align 1
    char _pad_0D0E[0x2]; // offset 0xD0E
    CNetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0xD10, size 0x18, align 8
    char _pad_0D28[0x8]; // offset 0xD28
};
