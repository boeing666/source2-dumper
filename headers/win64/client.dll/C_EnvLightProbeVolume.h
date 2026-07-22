#pragma once

class C_EnvLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x1690, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x15F8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x15F8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x1600, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x1608, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x1610, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x1618, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x1620, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x1628, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x1630, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x1638, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x1640, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x164C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x1658, size 0x1, align 1
    char _pad_1659[0x3]; // offset 0x1659
    int32 m_Entity_nHandshake; // offset 0x165C, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x1660, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x1664, size 0x1, align 1
    char _pad_1665[0x3]; // offset 0x1665
    int32 m_Entity_nLightProbeSizeX; // offset 0x1668, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x166C, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x1670, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x1674, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x1678, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x167C, size 0x4, align 4
    char _pad_1680[0x9]; // offset 0x1680
    bool m_Entity_bEnabled; // offset 0x1689, size 0x1, align 1
    char _pad_168A[0x6]; // offset 0x168A
};
