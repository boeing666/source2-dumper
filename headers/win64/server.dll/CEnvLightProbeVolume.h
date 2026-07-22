#pragma once

class CEnvLightProbeVolume : public CBaseEntity /*0x0*/  // sizeof 0x1538, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x14A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x14A8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x14B0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x14B8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x14C0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x14C8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x14D0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x14D8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x14E0, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x14E8, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x14F4, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x1500, size 0x1, align 1
    char _pad_1501[0x3]; // offset 0x1501
    int32 m_Entity_nHandshake; // offset 0x1504, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x1508, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x150C, size 0x1, align 1
    char _pad_150D[0x3]; // offset 0x150D
    int32 m_Entity_nLightProbeSizeX; // offset 0x1510, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x1514, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x1518, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x151C, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x1520, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x1524, size 0x4, align 4
    char _pad_1528[0x9]; // offset 0x1528
    bool m_Entity_bEnabled; // offset 0x1531, size 0x1, align 1
    char _pad_1532[0x6]; // offset 0x1532
};
