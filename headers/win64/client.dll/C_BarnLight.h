#pragma once

class C_BarnLight : public C_BaseModelEntity /*0x0*/  // sizeof 0x12C0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    bool m_bEnabled; // offset 0xFB0, size 0x1, align 1
    char _pad_0FB1[0x3]; // offset 0xFB1
    int32 m_nColorMode; // offset 0xFB4, size 0x4, align 4
    Color m_Color; // offset 0xFB8, size 0x4, align 1
    float32 m_flColorTemperature; // offset 0xFBC, size 0x4, align 4
    float32 m_flBrightness; // offset 0xFC0, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xFC4, size 0x4, align 4
    int32 m_nDirectLight; // offset 0xFC8, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0xFCC, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0xFD0, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0xFD4, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0xFD8, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0xFDC, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0xFE0, size 0x4, align 4
    char _pad_0FE4[0x4]; // offset 0xFE4
    CUtlString m_LightStyleString; // offset 0xFE8, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0xFF0, size 0x4, align 255
    char _pad_0FF4[0x4]; // offset 0xFF4
    C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0xFF8, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0x1010, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // offset 0x1028, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0x1040, size 0x60, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x10A0, size 0x8, align 8
    float32 m_flShape; // offset 0x10A8, size 0x4, align 4
    float32 m_flSoftX; // offset 0x10AC, size 0x4, align 4
    float32 m_flSoftY; // offset 0x10B0, size 0x4, align 4
    float32 m_flSkirt; // offset 0x10B4, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0x10B8, size 0x4, align 4
    Vector m_vSizeParams; // offset 0x10BC, size 0xC, align 4
    float32 m_flRange; // offset 0x10C8, size 0x4, align 4
    Vector m_vShear; // offset 0x10CC, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0x10D8, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0x10DC, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0x10E8, size 0x4, align 4
    int32 m_nCastShadows; // offset 0x10EC, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0x10F0, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0x10F4, size 0x4, align 4
    bool m_bContactShadow; // offset 0x10F8, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0x10F9, size 0x1, align 1
    char _pad_10FA[0x2]; // offset 0x10FA
    int32 m_nBounceLight; // offset 0x10FC, size 0x4, align 4
    float32 m_flBounceScale; // offset 0x1100, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0x1104, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0x1108, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0x1114, size 0x4, align 4
    int32 m_nFog; // offset 0x1118, size 0x4, align 4
    float32 m_flFogStrength; // offset 0x111C, size 0x4, align 4
    int32 m_nFogShadows; // offset 0x1120, size 0x4, align 4
    float32 m_flFogScale; // offset 0x1124, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0x1128, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0x112C, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0x1130, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0x1134, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0x1138, size 0x1, align 1
    char _pad_1139[0x3]; // offset 0x1139
    Vector m_vPrecomputedBoundsMins; // offset 0x113C, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0x1148, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0x1154, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0x1160, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0x116C, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0x1178, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0x117C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0x1188, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0x1194, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0x11A0, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0x11AC, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0x11B8, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0x11C4, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0x11D0, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0x11DC, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0x11E8, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0x11F4, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0x1200, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0x120C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0x1218, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0x1224, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0x1230, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0x123C, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0x1248, size 0xC, align 4
    char _pad_1254[0x44]; // offset 0x1254
    bool m_bInitialBoneSetup; // offset 0x1298, size 0x1, align 1 | MNotSaved
    char _pad_1299[0x7]; // offset 0x1299
    C_NetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0x12A0, size 0x18, align 8
    char _pad_12B8[0x8]; // offset 0x12B8
};
