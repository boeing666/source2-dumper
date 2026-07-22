#pragma once

class CEnvCombinedLightProbeVolume : public CBaseEntity /*0x0*/  // sizeof 0x15E0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1510]; // offset 0x0
    Color m_Entity_Color; // offset 0x1510, size 0x4, align 1
    float32 m_Entity_flBrightness; // offset 0x1514, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x1518, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x1520, size 0x1, align 1
    char _pad_1521[0x7]; // offset 0x1521
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x1528, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x1530, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x1538, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x1540, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x1548, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x1550, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x1558, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x1560, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x1568, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x1570, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x157C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x1588, size 0x1, align 1
    char _pad_1589[0x3]; // offset 0x1589
    int32 m_Entity_nHandshake; // offset 0x158C, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x1590, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x1594, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x1598, size 0x1, align 1
    char _pad_1599[0x3]; // offset 0x1599
    float32 m_Entity_flEdgeFadeDist; // offset 0x159C, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x15A0, size 0xC, align 4
    int32 m_Entity_nLightProbeSizeX; // offset 0x15AC, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x15B0, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x15B4, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x15B8, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x15BC, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x15C0, size 0x4, align 4
    char _pad_15C4[0x15]; // offset 0x15C4
    bool m_Entity_bEnabled; // offset 0x15D9, size 0x1, align 1
    char _pad_15DA[0x6]; // offset 0x15DA
};
