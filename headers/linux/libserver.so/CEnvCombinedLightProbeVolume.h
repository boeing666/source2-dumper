#pragma once

class CEnvCombinedLightProbeVolume : public CBaseEntity /*0x0*/  // sizeof 0x18D0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1800]; // offset 0x0
    Color m_Entity_Color; // offset 0x1800, size 0x4, align 1
    float32 m_Entity_flBrightness; // offset 0x1804, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x1808, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x1810, size 0x1, align 1
    char _pad_1811[0x7]; // offset 0x1811
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x1818, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x1820, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x1828, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x1830, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x1838, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x1840, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x1848, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x1850, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x1858, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x1860, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x186C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x1878, size 0x1, align 1
    char _pad_1879[0x3]; // offset 0x1879
    int32 m_Entity_nHandshake; // offset 0x187C, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x1880, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x1884, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x1888, size 0x1, align 1
    char _pad_1889[0x3]; // offset 0x1889
    float32 m_Entity_flEdgeFadeDist; // offset 0x188C, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x1890, size 0xC, align 4
    int32 m_Entity_nLightProbeSizeX; // offset 0x189C, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x18A0, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x18A4, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x18A8, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x18AC, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x18B0, size 0x4, align 4
    char _pad_18B4[0x15]; // offset 0x18B4
    bool m_Entity_bEnabled; // offset 0x18C9, size 0x1, align 1
    char _pad_18CA[0x6]; // offset 0x18CA
};
