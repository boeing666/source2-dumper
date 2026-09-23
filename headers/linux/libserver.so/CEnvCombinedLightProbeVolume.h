#pragma once

class CEnvCombinedLightProbeVolume : public CBaseEntity /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x8A0]; // offset 0x0
    Color m_Entity_Color; // offset 0x8A0, size 0x4, align 4
    float32 m_Entity_flBrightness; // offset 0x8A4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x8A8, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x8B0, size 0x1, align 1
    char _pad_08B1[0x7]; // offset 0x8B1
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x8B8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x8C0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x8C8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_L1; // offset 0x8D0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x8D8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x8E0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x8E8, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x8F0, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x8FC, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x908, size 0x1, align 1
    char _pad_0909[0x3]; // offset 0x909
    int32 m_Entity_nHandshake; // offset 0x90C, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x910, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x914, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x918, size 0x1, align 1
    char _pad_0919[0x3]; // offset 0x919
    float32 m_Entity_flEdgeFadeDist; // offset 0x91C, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x920, size 0xC, align 4
    int32 m_Entity_nLightProbeSizeX; // offset 0x92C, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x930, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x934, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x938, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x93C, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x15]; // offset 0x944
    bool m_Entity_bEnabled; // offset 0x959, size 0x1, align 1
    char _pad_095A[0x6]; // offset 0x95A
};
