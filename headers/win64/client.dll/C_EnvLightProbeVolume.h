#pragma once

class C_EnvLightProbeVolume : public C_BaseEntity /*0x0*/  // sizeof 0x1680, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x15E8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x15E8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x15F0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x15F8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R; // offset 0x1600, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G; // offset 0x1608, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B; // offset 0x1610, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x1618, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x1620, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x1628, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x1630, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x163C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x1648, size 0x1, align 1
    char _pad_1649[0x3]; // offset 0x1649
    int32 m_Entity_nHandshake; // offset 0x164C, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x1650, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x1654, size 0x1, align 1
    char _pad_1655[0x3]; // offset 0x1655
    int32 m_Entity_nLightProbeSizeX; // offset 0x1658, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x165C, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x1660, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x1664, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x1668, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x166C, size 0x4, align 4
    char _pad_1670[0x9]; // offset 0x1670
    bool m_Entity_bEnabled; // offset 0x1679, size 0x1, align 1
    char _pad_167A[0x6]; // offset 0x167A
};
