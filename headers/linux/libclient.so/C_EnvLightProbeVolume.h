#pragma once

class C_EnvLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x1800, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1768]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x1768, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x1770, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x1778, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x1780, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x1788, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x1790, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x1798, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x17A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x17A8, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x17B0, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x17BC, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x17C8, size 0x1, align 1
    char _pad_17C9[0x3]; // offset 0x17C9
    int32 m_Entity_nHandshake; // offset 0x17CC, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x17D0, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x17D4, size 0x1, align 1
    char _pad_17D5[0x3]; // offset 0x17D5
    int32 m_Entity_nLightProbeSizeX; // offset 0x17D8, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x17DC, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x17E0, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x17E4, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x17E8, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x17EC, size 0x4, align 4
    char _pad_17F0[0x9]; // offset 0x17F0
    bool m_Entity_bEnabled; // offset 0x17F9, size 0x1, align 1
    char _pad_17FA[0x6]; // offset 0x17FA
};
