#pragma once

class C_EnvLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x720, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x698]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x698, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x6A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x6A8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_L1; // offset 0x6B0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x6B8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x6C0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x6C8, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x6D0, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x6DC, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x6E8, size 0x1, align 1
    char _pad_06E9[0x3]; // offset 0x6E9
    int32 m_Entity_nHandshake; // offset 0x6EC, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x6F0, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x6F4, size 0x1, align 1
    char _pad_06F5[0x3]; // offset 0x6F5
    int32 m_Entity_nLightProbeSizeX; // offset 0x6F8, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x6FC, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x700, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x704, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x708, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x70C, size 0x4, align 4
    char _pad_0710[0x9]; // offset 0x710
    bool m_Entity_bEnabled; // offset 0x719, size 0x1, align 1
    char _pad_071A[0x6]; // offset 0x71A
};
