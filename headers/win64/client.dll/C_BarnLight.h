#pragma once

class C_BarnLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    bool m_bEnabled; // offset 0x9A8, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_09A9[0x3]; // offset 0x9A9
    int32 m_nColorMode; // offset 0x9AC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    Color m_Color; // offset 0x9B0, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    float32 m_flColorTemperature; // offset 0x9B4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flBrightness; // offset 0x9B8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flBrightnessScale; // offset 0x9BC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nDirectLight; // offset 0x9C0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nBakedShadowIndex; // offset 0x9C4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nLightPathUniqueId; // offset 0x9C8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nLightMapUniqueId; // offset 0x9CC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nLuminaireShape; // offset 0x9D0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flLuminaireSize; // offset 0x9D4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flLuminaireAnisotropy; // offset 0x9D8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_09DC[0x4]; // offset 0x9DC
    CUtlString m_LightStyleString; // offset 0x9E0, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    GameTime_t m_flLightStyleStartTime; // offset 0x9E8, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
    char _pad_09EC[0x4]; // offset 0x9EC
    C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0x9F0, size 0x18, align 8 | MNetworkEnable
    C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0xA08, size 0x18, align 8 | MNetworkEnable
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // offset 0xA20, size 0x18, align 8 | MNetworkEnable
    CEntityIOOutput[4] m_StyleEvent; // offset 0xA38, size 0x60, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0xA98, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShape; // offset 0xAA0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flSoftX; // offset 0xAA4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flSoftY; // offset 0xAA8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flSkirt; // offset 0xAAC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flSkirtNear; // offset 0xAB0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vSizeParams; // offset 0xAB4, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkBitCount
    float32 m_flRange; // offset 0xAC0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkBitCount
    Vector m_vShear; // offset 0xAC4, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkBitCount
    int32 m_nBakeSpecularToCubemaps; // offset 0xAD0, size 0x4, align 4 | MNetworkEnable
    Vector m_vBakeSpecularToCubemapsSize; // offset 0xAD4, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkBitCount
    int32 m_nCastShadows; // offset 0xAE0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nShadowMapSize; // offset 0xAE4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nShadowPriority; // offset 0xAE8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bContactShadow; // offset 0xAEC, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bForceShadowsEnabled; // offset 0xAED, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0AEE[0x2]; // offset 0xAEE
    int32 m_nBounceLight; // offset 0xAF0, size 0x4, align 4 | MNetworkEnable
    float32 m_flBounceScale; // offset 0xAF4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bDynamicBounce; // offset 0xAF8, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0AF9[0x3]; // offset 0xAF9
    float32 m_flMinRoughness; // offset 0xAFC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vAlternateColor; // offset 0xB00, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_fAlternateColorBrightness; // offset 0xB0C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nFog; // offset 0xB10, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogStrength; // offset 0xB14, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nFogShadows; // offset 0xB18, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogScale; // offset 0xB1C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFadeSizeStart; // offset 0xB20, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFadeSizeEnd; // offset 0xB24, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowFadeSizeStart; // offset 0xB28, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flShadowFadeSizeEnd; // offset 0xB2C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bPrecomputedFieldsValid; // offset 0xB30, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0B31[0x3]; // offset 0xB31
    Vector m_vPrecomputedBoundsMins; // offset 0xB34, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedBoundsMaxs; // offset 0xB40, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBOrigin; // offset 0xB4C, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    QAngle m_vPrecomputedOBBAngles; // offset 0xB58, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBExtent; // offset 0xB64, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nPrecomputedSubFrusta; // offset 0xB70, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBOrigin0; // offset 0xB74, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    QAngle m_vPrecomputedOBBAngles0; // offset 0xB80, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBExtent0; // offset 0xB8C, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBOrigin1; // offset 0xB98, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    QAngle m_vPrecomputedOBBAngles1; // offset 0xBA4, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBExtent1; // offset 0xBB0, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBOrigin2; // offset 0xBBC, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    QAngle m_vPrecomputedOBBAngles2; // offset 0xBC8, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBExtent2; // offset 0xBD4, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBOrigin3; // offset 0xBE0, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    QAngle m_vPrecomputedOBBAngles3; // offset 0xBEC, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBExtent3; // offset 0xBF8, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBOrigin4; // offset 0xC04, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    QAngle m_vPrecomputedOBBAngles4; // offset 0xC10, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBExtent4; // offset 0xC1C, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBOrigin5; // offset 0xC28, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    QAngle m_vPrecomputedOBBAngles5; // offset 0xC34, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    Vector m_vPrecomputedOBBExtent5; // offset 0xC40, size 0xC, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_0C4C[0x44]; // offset 0xC4C
    bool m_bInitialBoneSetup; // offset 0xC90, size 0x1, align 1 | MNotSaved
    char _pad_0C91[0x7]; // offset 0xC91
    C_NetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0xC98, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    char _pad_0CB0[0x8]; // offset 0xCB0
};
