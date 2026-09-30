#pragma once

class C_BarnLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xEC0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    bool m_bEnabled; // offset 0xBB0, size 0x1, align 1
    char _pad_0BB1[0x3]; // offset 0xBB1
    int32 m_nColorMode; // offset 0xBB4, size 0x4, align 4
    Color m_Color; // offset 0xBB8, size 0x4, align 4
    float32 m_flColorTemperature; // offset 0xBBC, size 0x4, align 4
    float32 m_flBrightness; // offset 0xBC0, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xBC4, size 0x4, align 4
    int32 m_nDirectLight; // offset 0xBC8, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0xBCC, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0xBD0, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0xBD4, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0xBD8, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0xBDC, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0xBE0, size 0x4, align 4
    char _pad_0BE4[0x4]; // offset 0xBE4
    CUtlString m_LightStyleString; // offset 0xBE8, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0xBF0, size 0x4, align 255
    char _pad_0BF4[0x4]; // offset 0xBF4
    C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0xBF8, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0xC10, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // offset 0xC28, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0xC40, size 0x60, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0xCA0, size 0x8, align 8
    float32 m_flShape; // offset 0xCA8, size 0x4, align 4
    float32 m_flSoftX; // offset 0xCAC, size 0x4, align 4
    float32 m_flSoftY; // offset 0xCB0, size 0x4, align 4
    float32 m_flSkirt; // offset 0xCB4, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0xCB8, size 0x4, align 4
    Vector m_vSizeParams; // offset 0xCBC, size 0xC, align 4
    float32 m_flRange; // offset 0xCC8, size 0x4, align 4
    Vector m_vShear; // offset 0xCCC, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0xCD8, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0xCDC, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0xCE8, size 0x4, align 4
    int32 m_nCastShadows; // offset 0xCEC, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0xCF0, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0xCF4, size 0x4, align 4
    bool m_bContactShadow; // offset 0xCF8, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0xCF9, size 0x1, align 1
    char _pad_0CFA[0x2]; // offset 0xCFA
    int32 m_nBounceLight; // offset 0xCFC, size 0x4, align 4
    float32 m_flBounceScale; // offset 0xD00, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0xD04, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0xD08, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0xD14, size 0x4, align 4
    int32 m_nFog; // offset 0xD18, size 0x4, align 4
    float32 m_flFogStrength; // offset 0xD1C, size 0x4, align 4
    int32 m_nFogShadows; // offset 0xD20, size 0x4, align 4
    float32 m_flFogScale; // offset 0xD24, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0xD28, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0xD2C, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0xD30, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0xD34, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0xD38, size 0x1, align 1
    char _pad_0D39[0x3]; // offset 0xD39
    Vector m_vPrecomputedBoundsMins; // offset 0xD3C, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0xD48, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0xD54, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0xD60, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0xD6C, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0xD78, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0xD7C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0xD88, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0xD94, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0xDA0, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0xDAC, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0xDB8, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0xDC4, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0xDD0, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0xDDC, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0xDE8, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0xDF4, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0xE00, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0xE0C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0xE18, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0xE24, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0xE30, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0xE3C, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0xE48, size 0xC, align 4
    char _pad_0E54[0x44]; // offset 0xE54
    bool m_bInitialBoneSetup; // offset 0xE98, size 0x1, align 1 | MNotSaved
    char _pad_0E99[0x7]; // offset 0xE99
    C_NetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0xEA0, size 0x18, align 8
    char _pad_0EB8[0x8]; // offset 0xEB8
};
