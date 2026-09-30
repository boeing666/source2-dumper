#pragma once

class CEnvLightProbeVolume : public CBaseEntity /*0x0*/  // sizeof 0x5D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x548]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube; // offset 0x548, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF; // offset 0x550, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC; // offset 0x558, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_L1; // offset 0x560, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // offset 0x568, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // offset 0x570, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // offset 0x578, size 0x8, align 8
    Vector m_Entity_vBoxMins; // offset 0x580, size 0xC, align 4
    Vector m_Entity_vBoxMaxs; // offset 0x58C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x598, size 0x1, align 1
    char _pad_0599[0x3]; // offset 0x599
    int32 m_Entity_nHandshake; // offset 0x59C, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x5A0, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x5A4, size 0x1, align 1
    char _pad_05A5[0x3]; // offset 0x5A5
    int32 m_Entity_nLightProbeSizeX; // offset 0x5A8, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeY; // offset 0x5AC, size 0x4, align 4
    int32 m_Entity_nLightProbeSizeZ; // offset 0x5B0, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasX; // offset 0x5B4, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasY; // offset 0x5B8, size 0x4, align 4
    int32 m_Entity_nLightProbeAtlasZ; // offset 0x5BC, size 0x4, align 4
    char _pad_05C0[0x9]; // offset 0x5C0
    bool m_Entity_bEnabled; // offset 0x5C9, size 0x1, align 1
    char _pad_05CA[0x6]; // offset 0x5CA
};
