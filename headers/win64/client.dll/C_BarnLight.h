#pragma once

class C_BarnLight : public C_BaseModelEntity /*0x0*/  // sizeof 0x13A8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    bool m_bEnabled; // offset 0x1098, size 0x1, align 1
    char _pad_1099[0x3]; // offset 0x1099
    int32 m_nColorMode; // offset 0x109C, size 0x4, align 4
    Color m_Color; // offset 0x10A0, size 0x4, align 4
    float32 m_flColorTemperature; // offset 0x10A4, size 0x4, align 4
    float32 m_flBrightness; // offset 0x10A8, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x10AC, size 0x4, align 4
    int32 m_nDirectLight; // offset 0x10B0, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0x10B4, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0x10B8, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0x10BC, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0x10C0, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0x10C4, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0x10C8, size 0x4, align 4
    char _pad_10CC[0x4]; // offset 0x10CC
    CUtlString m_LightStyleString; // offset 0x10D0, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0x10D8, size 0x4, align 255
    char _pad_10DC[0x4]; // offset 0x10DC
    C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0x10E0, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0x10F8, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // offset 0x1110, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0x1128, size 0x60, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x1188, size 0x8, align 8
    float32 m_flShape; // offset 0x1190, size 0x4, align 4
    float32 m_flSoftX; // offset 0x1194, size 0x4, align 4
    float32 m_flSoftY; // offset 0x1198, size 0x4, align 4
    float32 m_flSkirt; // offset 0x119C, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0x11A0, size 0x4, align 4
    Vector m_vSizeParams; // offset 0x11A4, size 0xC, align 4
    float32 m_flRange; // offset 0x11B0, size 0x4, align 4
    Vector m_vShear; // offset 0x11B4, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0x11C0, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0x11C4, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0x11D0, size 0x4, align 4
    int32 m_nCastShadows; // offset 0x11D4, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0x11D8, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0x11DC, size 0x4, align 4
    bool m_bContactShadow; // offset 0x11E0, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0x11E1, size 0x1, align 1
    char _pad_11E2[0x2]; // offset 0x11E2
    int32 m_nBounceLight; // offset 0x11E4, size 0x4, align 4
    float32 m_flBounceScale; // offset 0x11E8, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0x11EC, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0x11F0, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0x11FC, size 0x4, align 4
    int32 m_nFog; // offset 0x1200, size 0x4, align 4
    float32 m_flFogStrength; // offset 0x1204, size 0x4, align 4
    int32 m_nFogShadows; // offset 0x1208, size 0x4, align 4
    float32 m_flFogScale; // offset 0x120C, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0x1210, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0x1214, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0x1218, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0x121C, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0x1220, size 0x1, align 1
    char _pad_1221[0x3]; // offset 0x1221
    Vector m_vPrecomputedBoundsMins; // offset 0x1224, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0x1230, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0x123C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0x1248, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0x1254, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0x1260, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0x1264, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0x1270, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0x127C, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0x1288, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0x1294, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0x12A0, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0x12AC, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0x12B8, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0x12C4, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0x12D0, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0x12DC, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0x12E8, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0x12F4, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0x1300, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0x130C, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0x1318, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0x1324, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0x1330, size 0xC, align 4
    char _pad_133C[0x44]; // offset 0x133C
    bool m_bInitialBoneSetup; // offset 0x1380, size 0x1, align 1 | MNotSaved
    char _pad_1381[0x7]; // offset 0x1381
    C_NetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0x1388, size 0x18, align 8
    char _pad_13A0[0x8]; // offset 0x13A0
};
