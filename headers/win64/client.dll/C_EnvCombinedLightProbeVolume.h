#pragma once

class C_EnvCombinedLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x708]; // offset 0x0
    Color m_Entity_Color; // offset 0x708, size 0x4, align 4
    float32 m_Entity_flBrightness; // offset 0x70C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x710, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x718, size 0x1, align 1
    char _pad_0719[0x7]; // offset 0x719
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x720, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x728, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x730, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_L1; // offset 0x738, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x740, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x748, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x750, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x758, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x764, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x770, size 0x1, align 1
    char _pad_0771[0x3]; // offset 0x771
    int32 m_Entity_nHandshake; // offset 0x774, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x778, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x77C, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x3]; // offset 0x781
    float32 m_Entity_flEdgeFadeDist; // offset 0x784, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x788, size 0xC, align 4
    int32 m_Entity_nLightProbeSizeX; // offset 0x794, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x798, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x79C, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x7A0, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x7A4, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x15]; // offset 0x7AC
    bool m_Entity_bEnabled; // offset 0x7C1, size 0x1, align 1
    char _pad_07C2[0x6]; // offset 0x7C2
};
