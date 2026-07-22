#pragma once

class C_EnvCombinedLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x1738, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1668]; // offset 0x0
    Color m_Entity_Color; // offset 0x1668, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    float32 m_Entity_flBrightness; // offset 0x166C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x1670, size 0x8, align 8 | MNetworkEnable
    bool m_Entity_bCustomCubemapTexture; // offset 0x1678, size 0x1, align 1 | MNetworkEnable
    char _pad_1679[0x7]; // offset 0x1679
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x1680, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x1688, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x1690, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x1698, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x16A0, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x16A8, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x16B0, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x16B8, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x16C0, size 0x8, align 8 | MNetworkEnable
    Vector m_Entity_vBoxMins; // offset 0x16C8, size 0xC, align 4 | MNetworkEnable
    Vector m_Entity_vBoxMaxs; // offset 0x16D4, size 0xC, align 4 | MNetworkEnable
    bool m_Entity_bMoveable; // offset 0x16E0, size 0x1, align 1 | MNetworkEnable
    char _pad_16E1[0x3]; // offset 0x16E1
    int32 m_Entity_nHandshake; // offset 0x16E4, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x16E8, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nPriority; // offset 0x16EC, size 0x4, align 4 | MNetworkEnable
    bool m_Entity_bStartDisabled; // offset 0x16F0, size 0x1, align 1 | MNetworkEnable
    char _pad_16F1[0x3]; // offset 0x16F1
    float32 m_Entity_flEdgeFadeDist; // offset 0x16F4, size 0x4, align 4 | MNetworkEnable
    Vector m_Entity_vEdgeFadeDists; // offset 0x16F8, size 0xC, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeSizeX; // offset 0x1704, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeSizeY; // offset 0x1708, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeSizeZ; // offset 0x170C, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeAtlasX; // offset 0x1710, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeAtlasY; // offset 0x1714, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x1718, size 0x4, align 4 | MNetworkEnable
    char _pad_171C[0x15]; // offset 0x171C
    bool m_Entity_bEnabled; // offset 0x1731, size 0x1, align 1 | MNetworkEnable
    char _pad_1732[0x6]; // offset 0x1732
};
