#pragma once

class CBarnLight : public CBaseModelEntity /*0x0*/  // sizeof 0xA58, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x770]; // offset 0x0
    bool m_bEnabled; // offset 0x770, size 0x1, align 1
    char _pad_0771[0x3]; // offset 0x771
    int32 m_nColorMode; // offset 0x774, size 0x4, align 4
    Color m_Color; // offset 0x778, size 0x4, align 1
    float32 m_flColorTemperature; // offset 0x77C, size 0x4, align 4
    float32 m_flBrightness; // offset 0x780, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x784, size 0x4, align 4
    int32 m_nDirectLight; // offset 0x788, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0x78C, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0x790, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0x794, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0x798, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0x79C, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
    CUtlString m_LightStyleString; // offset 0x7A8, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0x7B0, size 0x4, align 255
    char _pad_07B4[0x4]; // offset 0x7B4
    CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0x7B8, size 0x18, align 8
    CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0x7D0, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets; // offset 0x7E8, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0x800, size 0x60, align 8
    char _pad_0860[0x20]; // offset 0x860
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x880, size 0x8, align 8
    float32 m_flShape; // offset 0x888, size 0x4, align 4
    float32 m_flSoftX; // offset 0x88C, size 0x4, align 4
    float32 m_flSoftY; // offset 0x890, size 0x4, align 4
    float32 m_flSkirt; // offset 0x894, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0x898, size 0x4, align 4
    Vector m_vSizeParams; // offset 0x89C, size 0xC, align 4
    float32 m_flRange; // offset 0x8A8, size 0x4, align 4
    Vector m_vShear; // offset 0x8AC, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0x8B8, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0x8BC, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0x8C8, size 0x4, align 4
    int32 m_nCastShadows; // offset 0x8CC, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0x8D0, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0x8D4, size 0x4, align 4
    bool m_bContactShadow; // offset 0x8D8, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0x8D9, size 0x1, align 1
    char _pad_08DA[0x2]; // offset 0x8DA
    int32 m_nBounceLight; // offset 0x8DC, size 0x4, align 4
    float32 m_flBounceScale; // offset 0x8E0, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0x8E4, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0x8E8, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0x8F4, size 0x4, align 4
    int32 m_nFog; // offset 0x8F8, size 0x4, align 4
    float32 m_flFogStrength; // offset 0x8FC, size 0x4, align 4
    int32 m_nFogShadows; // offset 0x900, size 0x4, align 4
    float32 m_flFogScale; // offset 0x904, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0x908, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0x90C, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0x910, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0x914, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0x918, size 0x1, align 1
    char _pad_0919[0x3]; // offset 0x919
    Vector m_vPrecomputedBoundsMins; // offset 0x91C, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0x928, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0x934, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0x940, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0x94C, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0x958, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0x95C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0x968, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0x974, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0x980, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0x98C, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0x998, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0x9A4, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0x9B0, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0x9BC, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0x9C8, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0x9D4, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0x9E0, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0x9EC, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0x9F8, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0xA04, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0xA10, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0xA1C, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0xA28, size 0xC, align 4
    bool m_bPvsModifyEntity; // offset 0xA34, size 0x1, align 1
    bool m_bTransmitAlways; // offset 0xA35, size 0x1, align 1
    char _pad_0A36[0x2]; // offset 0xA36
    CNetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0xA38, size 0x18, align 8
    char _pad_0A50[0x8]; // offset 0xA50
};
