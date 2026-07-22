#pragma once

class CEnvCombinedLightProbeVolume : public CBaseEntity /*0x0*/  // sizeof 0x15E8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1518]; // offset 0x0
    Color m_Entity_Color; // offset 0x1518, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    float32 m_Entity_flBrightness; // offset 0x151C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x1520, size 0x8, align 8 | MNetworkEnable
    bool m_Entity_bCustomCubemapTexture; // offset 0x1528, size 0x1, align 1 | MNetworkEnable
    char _pad_1529[0x7]; // offset 0x1529
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x1530, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x1538, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x1540, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x1548, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x1550, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x1558, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x1560, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x1568, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x1570, size 0x8, align 8 | MNetworkEnable
    Vector m_Entity_vBoxMins; // offset 0x1578, size 0xC, align 4 | MNetworkEnable
    Vector m_Entity_vBoxMaxs; // offset 0x1584, size 0xC, align 4 | MNetworkEnable
    bool m_Entity_bMoveable; // offset 0x1590, size 0x1, align 1 | MNetworkEnable
    char _pad_1591[0x3]; // offset 0x1591
    int32 m_Entity_nHandshake; // offset 0x1594, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x1598, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nPriority; // offset 0x159C, size 0x4, align 4 | MNetworkEnable
    bool m_Entity_bStartDisabled; // offset 0x15A0, size 0x1, align 1 | MNetworkEnable
    char _pad_15A1[0x3]; // offset 0x15A1
    float32 m_Entity_flEdgeFadeDist; // offset 0x15A4, size 0x4, align 4 | MNetworkEnable
    Vector m_Entity_vEdgeFadeDists; // offset 0x15A8, size 0xC, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeSizeX; // offset 0x15B4, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeSizeY; // offset 0x15B8, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeSizeZ; // offset 0x15BC, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeAtlasX; // offset 0x15C0, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeAtlasY; // offset 0x15C4, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x15C8, size 0x4, align 4 | MNetworkEnable
    char _pad_15CC[0x15]; // offset 0x15CC
    bool m_Entity_bEnabled; // offset 0x15E1, size 0x1, align 1 | MNetworkEnable
    char _pad_15E2[0x6]; // offset 0x15E2
};
