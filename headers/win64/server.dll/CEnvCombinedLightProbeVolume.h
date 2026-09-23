#pragma once

class CEnvCombinedLightProbeVolume : public CBaseEntity /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x5C0]; // offset 0x0
    Color m_Entity_Color; // offset 0x5C0, size 0x4, align 4
    float32 m_Entity_flBrightness; // offset 0x5C4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x5C8, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x5D0, size 0x1, align 1
    char _pad_05D1[0x7]; // offset 0x5D1
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x5D8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x5E0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x5E8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_L1; // offset 0x5F0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x5F8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x600, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x608, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x610, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x61C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x628, size 0x1, align 1
    char _pad_0629[0x3]; // offset 0x629
    int32 m_Entity_nHandshake; // offset 0x62C, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x630, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x634, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x638, size 0x1, align 1
    char _pad_0639[0x3]; // offset 0x639
    float32 m_Entity_flEdgeFadeDist; // offset 0x63C, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x640, size 0xC, align 4
    int32 m_Entity_nLightProbeSizeX; // offset 0x64C, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x650, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x654, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x658, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x65C, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x660, size 0x4, align 4
    char _pad_0664[0x15]; // offset 0x664
    bool m_Entity_bEnabled; // offset 0x679, size 0x1, align 1
    char _pad_067A[0x6]; // offset 0x67A
};
