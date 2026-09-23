#pragma once

class C_BarnLight : public C_BaseModelEntity /*0x0*/  // sizeof 0x1330, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    bool m_bEnabled; // offset 0x1020, size 0x1, align 1
    char _pad_1021[0x3]; // offset 0x1021
    int32 m_nColorMode; // offset 0x1024, size 0x4, align 4
    Color m_Color; // offset 0x1028, size 0x4, align 4
    float32 m_flColorTemperature; // offset 0x102C, size 0x4, align 4
    float32 m_flBrightness; // offset 0x1030, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x1034, size 0x4, align 4
    int32 m_nDirectLight; // offset 0x1038, size 0x4, align 4
    int32 m_nBakedShadowIndex; // offset 0x103C, size 0x4, align 4
    int32 m_nLightPathUniqueId; // offset 0x1040, size 0x4, align 4
    int32 m_nLightMapUniqueId; // offset 0x1044, size 0x4, align 4
    int32 m_nLuminaireShape; // offset 0x1048, size 0x4, align 4
    float32 m_flLuminaireSize; // offset 0x104C, size 0x4, align 4
    float32 m_flLuminaireAnisotropy; // offset 0x1050, size 0x4, align 4
    char _pad_1054[0x4]; // offset 0x1054
    CUtlString m_LightStyleString; // offset 0x1058, size 0x8, align 8
    GameTime_t m_flLightStyleStartTime; // offset 0x1060, size 0x4, align 255
    char _pad_1064[0x4]; // offset 0x1064
    C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // offset 0x1068, size 0x18, align 8
    C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // offset 0x1080, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // offset 0x1098, size 0x18, align 8
    CEntityIOOutput[4] m_StyleEvent; // offset 0x10B0, size 0x60, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x1110, size 0x8, align 8
    float32 m_flShape; // offset 0x1118, size 0x4, align 4
    float32 m_flSoftX; // offset 0x111C, size 0x4, align 4
    float32 m_flSoftY; // offset 0x1120, size 0x4, align 4
    float32 m_flSkirt; // offset 0x1124, size 0x4, align 4
    float32 m_flSkirtNear; // offset 0x1128, size 0x4, align 4
    Vector m_vSizeParams; // offset 0x112C, size 0xC, align 4
    float32 m_flRange; // offset 0x1138, size 0x4, align 4
    Vector m_vShear; // offset 0x113C, size 0xC, align 4
    int32 m_nBakeSpecularToCubemaps; // offset 0x1148, size 0x4, align 4
    Vector m_vBakeSpecularToCubemapsSize; // offset 0x114C, size 0xC, align 4
    float32 m_flBakeSpecularToCubemapsScale; // offset 0x1158, size 0x4, align 4
    int32 m_nCastShadows; // offset 0x115C, size 0x4, align 4
    int32 m_nShadowMapSize; // offset 0x1160, size 0x4, align 4
    int32 m_nShadowPriority; // offset 0x1164, size 0x4, align 4
    bool m_bContactShadow; // offset 0x1168, size 0x1, align 1
    bool m_bForceShadowsEnabled; // offset 0x1169, size 0x1, align 1
    char _pad_116A[0x2]; // offset 0x116A
    int32 m_nBounceLight; // offset 0x116C, size 0x4, align 4
    float32 m_flBounceScale; // offset 0x1170, size 0x4, align 4
    float32 m_flMinRoughness; // offset 0x1174, size 0x4, align 4
    Vector m_vAlternateColor; // offset 0x1178, size 0xC, align 4
    float32 m_fAlternateColorBrightness; // offset 0x1184, size 0x4, align 4
    int32 m_nFog; // offset 0x1188, size 0x4, align 4
    float32 m_flFogStrength; // offset 0x118C, size 0x4, align 4
    int32 m_nFogShadows; // offset 0x1190, size 0x4, align 4
    float32 m_flFogScale; // offset 0x1194, size 0x4, align 4
    float32 m_flFadeSizeStart; // offset 0x1198, size 0x4, align 4
    float32 m_flFadeSizeEnd; // offset 0x119C, size 0x4, align 4
    float32 m_flShadowFadeSizeStart; // offset 0x11A0, size 0x4, align 4
    float32 m_flShadowFadeSizeEnd; // offset 0x11A4, size 0x4, align 4
    bool m_bPrecomputedFieldsValid; // offset 0x11A8, size 0x1, align 1
    char _pad_11A9[0x3]; // offset 0x11A9
    Vector m_vPrecomputedBoundsMins; // offset 0x11AC, size 0xC, align 4
    Vector m_vPrecomputedBoundsMaxs; // offset 0x11B8, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin; // offset 0x11C4, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles; // offset 0x11D0, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent; // offset 0x11DC, size 0xC, align 4
    int32 m_nPrecomputedSubFrusta; // offset 0x11E8, size 0x4, align 4
    Vector m_vPrecomputedOBBOrigin0; // offset 0x11EC, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles0; // offset 0x11F8, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent0; // offset 0x1204, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin1; // offset 0x1210, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles1; // offset 0x121C, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent1; // offset 0x1228, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin2; // offset 0x1234, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles2; // offset 0x1240, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent2; // offset 0x124C, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin3; // offset 0x1258, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles3; // offset 0x1264, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent3; // offset 0x1270, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin4; // offset 0x127C, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles4; // offset 0x1288, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent4; // offset 0x1294, size 0xC, align 4
    Vector m_vPrecomputedOBBOrigin5; // offset 0x12A0, size 0xC, align 4
    QAngle m_vPrecomputedOBBAngles5; // offset 0x12AC, size 0xC, align 4
    Vector m_vPrecomputedOBBExtent5; // offset 0x12B8, size 0xC, align 4
    char _pad_12C4[0x44]; // offset 0x12C4
    bool m_bInitialBoneSetup; // offset 0x1308, size 0x1, align 1 | MNotSaved
    char _pad_1309[0x7]; // offset 0x1309
    C_NetworkUtlVectorBase< uint16 > m_VisClusters; // offset 0x1310, size 0x18, align 8
    char _pad_1328[0x8]; // offset 0x1328
};
