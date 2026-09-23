#pragma once

class C_EnvLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x818]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x818, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x820, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x828, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_L1; // offset 0x830, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x838, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x840, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x848, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x850, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x85C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x3]; // offset 0x869
    int32 m_Entity_nHandshake; // offset 0x86C, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x870, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x874, size 0x1, align 1
    char _pad_0875[0x3]; // offset 0x875
    int32 m_Entity_nLightProbeSizeX; // offset 0x878, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x87C, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x880, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x884, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x888, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x88C, size 0x4, align 4
    char _pad_0890[0x9]; // offset 0x890
    bool m_Entity_bEnabled; // offset 0x899, size 0x1, align 1
    char _pad_089A[0x6]; // offset 0x89A
};
