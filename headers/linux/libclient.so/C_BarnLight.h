#pragma once

class C_BarnLight : public C_BaseModelEntity /*0x0*/  // sizeof 0x1248, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    bool m_bEnabled; // offset 0xF38, size 0x1, align 1
    char _pad_0F39[0x3]; // offset 0xF39
    int32 m_nColorMode; // offset 0xF3C, size 0x4, align 4
    Color m_Color; // offset 0xF40, size 0x4, align 1
    float32 m_flColorTemperature; // offset 0xF44, size 0x4, align 4
    float32 m_flBrightness; // offset 0xF48, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xF4C, size 0x4, align 4
    int32 m_nDirectLight; // offset 0xF50, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0xF54, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0xF58, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0xF5C, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0xF60, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0xF64, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0xF68, size 0x4, align 4
    char _pad_0F6C[0x4]; // offset 0xF6C
    CUtlString m_LightStyleString; // offset 0xF70, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0xF78, size 0x4, align 255
    char _pad_0F7C[0x4]; // offset 0xF7C
    C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0xF80, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0xF98, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // offset 0xFB0, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0xFC8, size 0x60, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x1028, size 0x8, align 8
    float32 m_flShape; // offset 0x1030, size 0x4, align 4
    float32 m_flSoftX; // offset 0x1034, size 0x4, align 4
    float32 m_flSoftY; // offset 0x1038, size 0x4, align 4
    float32 m_flSkirt; // offset 0x103C, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0x1040, size 0x4, align 4
    Vector m_vSizeParams; // offset 0x1044, size 0xC, align 4
    float32 m_flRange; // offset 0x1050, size 0x4, align 4
    Vector m_vShear; // offset 0x1054, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0x1060, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0x1064, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0x1070, size 0x4, align 4
    int32 m_nCastShadows; // offset 0x1074, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0x1078, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0x107C, size 0x4, align 4
    bool m_bContactShadow; // offset 0x1080, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0x1081, size 0x1, align 1
    char _pad_1082[0x2]; // offset 0x1082
    int32 m_nBounceLight; // offset 0x1084, size 0x4, align 4
    float32 m_flBounceScale; // offset 0x1088, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0x108C, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0x1090, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0x109C, size 0x4, align 4
    int32 m_nFog; // offset 0x10A0, size 0x4, align 4
    float32 m_flFogStrength; // offset 0x10A4, size 0x4, align 4
    int32 m_nFogShadows; // offset 0x10A8, size 0x4, align 4
    float32 m_flFogScale; // offset 0x10AC, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0x10B0, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0x10B4, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0x10B8, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0x10BC, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0x10C0, size 0x1, align 1
    char _pad_10C1[0x3]; // offset 0x10C1
    Vector m_vPrecomputedBoundsMins; // offset 0x10C4, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0x10D0, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0x10DC, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0x10E8, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0x10F4, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0x1100, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0x1104, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0x1110, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0x111C, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0x1128, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0x1134, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0x1140, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0x114C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0x1158, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0x1164, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0x1170, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0x117C, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0x1188, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0x1194, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0x11A0, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0x11AC, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0x11B8, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0x11C4, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0x11D0, size 0xC, align 4
    char _pad_11DC[0x44]; // offset 0x11DC
    bool m_bInitialBoneSetup; // offset 0x1220, size 0x1, align 1 | MNotSaved
    char _pad_1221[0x7]; // offset 0x1221
    C_NetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0x1228, size 0x18, align 8
    char _pad_1240[0x8]; // offset 0x1240
};
