#pragma once

class C_EnvCombinedLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x718]; // offset 0x0
    Color m_Entity_Color; // offset 0x718, size 0x4, align 4
    float32 m_Entity_flBrightness; // offset 0x71C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x720, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x728, size 0x1, align 1
    char _pad_0729[0x7]; // offset 0x729
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x730, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x738, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x740, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_L1; // offset 0x748, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x750, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x758, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x760, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x768, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x774, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x3]; // offset 0x781
    int32 m_Entity_nHandshake; // offset 0x784, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x788, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x78C, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x3]; // offset 0x791
    float32 m_Entity_flEdgeFadeDist; // offset 0x794, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x798, size 0xC, align 4
    int32 m_Entity_nLightProbeSizeX; // offset 0x7A4, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x7A8, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x7AC, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x7B0, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x7B4, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x7B8, size 0x4, align 4
    char _pad_07BC[0x15]; // offset 0x7BC
    bool m_Entity_bEnabled; // offset 0x7D1, size 0x1, align 1
    char _pad_07D2[0x6]; // offset 0x7D2
};
