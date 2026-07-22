#pragma once

class CEnvCombinedLightProbeVolume : public CBaseEntity /*0x0*/  // sizeof 0x15F0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1520]; // offset 0x0
    Color m_Entity_Color; // offset 0x1520, size 0x4, align 1
    float32 m_Entity_flBrightness; // offset 0x1524, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x1528, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x1530, size 0x1, align 1
    char _pad_1531[0x7]; // offset 0x1531
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x1538, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x1540, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x1548, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x1550, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x1558, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x1560, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x1568, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x1570, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x1578, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x1580, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x158C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x1598, size 0x1, align 1
    char _pad_1599[0x3]; // offset 0x1599
    int32 m_Entity_nHandshake; // offset 0x159C, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x15A0, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x15A4, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x15A8, size 0x1, align 1
    char _pad_15A9[0x3]; // offset 0x15A9
    float32 m_Entity_flEdgeFadeDist; // offset 0x15AC, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x15B0, size 0xC, align 4
    int32 m_Entity_nLightProbeSizeX; // offset 0x15BC, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x15C0, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x15C4, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x15C8, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x15CC, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x15D0, size 0x4, align 4
    char _pad_15D4[0x15]; // offset 0x15D4
    bool m_Entity_bEnabled; // offset 0x15E9, size 0x1, align 1
    char _pad_15EA[0x6]; // offset 0x15EA
};
