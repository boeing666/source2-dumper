#pragma once

class C_EnvCombinedLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x888]; // offset 0x0
    Color m_Entity_Color; // offset 0x888, size 0x4, align 4
    float32 m_Entity_flBrightness; // offset 0x88C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x890, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x898, size 0x1, align 1
    char _pad_0899[0x7]; // offset 0x899
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x8A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x8A8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x8B0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_L1; // offset 0x8B8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x8C0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x8C8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x8D0, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x8D8, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x8E4, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x8F0, size 0x1, align 1
    char _pad_08F1[0x3]; // offset 0x8F1
    int32 m_Entity_nHandshake; // offset 0x8F4, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x8F8, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x8FC, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x900, size 0x1, align 1
    char _pad_0901[0x3]; // offset 0x901
    float32 m_Entity_flEdgeFadeDist; // offset 0x904, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x908, size 0xC, align 4
    int32 m_Entity_nLightProbeSizeX; // offset 0x914, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x918, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x91C, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x920, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x924, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x928, size 0x4, align 4
    char _pad_092C[0x15]; // offset 0x92C
    bool m_Entity_bEnabled; // offset 0x941, size 0x1, align 1
    char _pad_0942[0x6]; // offset 0x942
};
