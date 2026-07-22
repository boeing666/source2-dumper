#pragma once

class C_EnvCombinedLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x1748, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1678]; // offset 0x0
    Color m_Entity_Color; // offset 0x1678, size 0x4, align 1
    float32 m_Entity_flBrightness; // offset 0x167C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x1680, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x1688, size 0x1, align 1
    char _pad_1689[0x7]; // offset 0x1689
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x1690, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x1698, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x16A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x16A8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x16B0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x16B8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x16C0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x16C8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x16D0, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x16D8, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x16E4, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x16F0, size 0x1, align 1
    char _pad_16F1[0x3]; // offset 0x16F1
    int32 m_Entity_nHandshake; // offset 0x16F4, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x16F8, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x16FC, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x1700, size 0x1, align 1
    char _pad_1701[0x3]; // offset 0x1701
    float32 m_Entity_flEdgeFadeDist; // offset 0x1704, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x1708, size 0xC, align 4
    int32 m_Entity_nLightProbeSizeX; // offset 0x1714, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x1718, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x171C, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x1720, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x1724, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x1728, size 0x4, align 4
    char _pad_172C[0x15]; // offset 0x172C
    bool m_Entity_bEnabled; // offset 0x1741, size 0x1, align 1
    char _pad_1742[0x6]; // offset 0x1742
};
