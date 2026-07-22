#pragma once

class C_EnvCubemap : public C_BaseEntity /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x670]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x670, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x678, size 0x1, align 1
    char _pad_0679[0x3]; // offset 0x679
    float32 m_Entity_flInfluenceRadius; // offset 0x67C, size 0x4, align 4
    Vector m_Entity_vBoxProjectMins; // offset 0x680, size 0xC, align 4
    Vector m_Entity_vBoxProjectMaxs; // offset 0x68C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x698, size 0x1, align 1
    char _pad_0699[0x3]; // offset 0x699
    int32 m_Entity_nHandshake; // offset 0x69C, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x6A0, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x6A4, size 0x4, align 4
    float32 m_Entity_flEdgeFadeDist; // offset 0x6A8, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x6AC, size 0xC, align 4
    float32 m_Entity_flDiffuseScale; // offset 0x6B8, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x6BC, size 0x1, align 1
    bool m_Entity_bDefaultEnvMap; // offset 0x6BD, size 0x1, align 1
    bool m_Entity_bDefaultSpecEnvMap; // offset 0x6BE, size 0x1, align 1
    bool m_Entity_bIndoorCubeMap; // offset 0x6BF, size 0x1, align 1
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // offset 0x6C0, size 0x1, align 1
    char _pad_06C1[0xF]; // offset 0x6C1
    bool m_Entity_bEnabled; // offset 0x6D0, size 0x1, align 1
    char _pad_06D1[0x7]; // offset 0x6D1
};
