#pragma once

class C_EnvCubemap : public C_BaseEntity /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x680]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x680, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x688, size 0x1, align 1
    char _pad_0689[0x3]; // offset 0x689
    float32 m_Entity_flInfluenceRadius; // offset 0x68C, size 0x4, align 4
    Vector m_Entity_vBoxProjectMins; // offset 0x690, size 0xC, align 4
    Vector m_Entity_vBoxProjectMaxs; // offset 0x69C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x6A8, size 0x1, align 1
    char _pad_06A9[0x3]; // offset 0x6A9
    int32 m_Entity_nHandshake; // offset 0x6AC, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x6B0, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x6B4, size 0x4, align 4
    float32 m_Entity_flEdgeFadeDist; // offset 0x6B8, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x6BC, size 0xC, align 4
    float32 m_Entity_flDiffuseScale; // offset 0x6C8, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x6CC, size 0x1, align 1
    bool m_Entity_bDefaultEnvMap; // offset 0x6CD, size 0x1, align 1
    bool m_Entity_bDefaultSpecEnvMap; // offset 0x6CE, size 0x1, align 1
    bool m_Entity_bIndoorCubeMap; // offset 0x6CF, size 0x1, align 1
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // offset 0x6D0, size 0x1, align 1
    char _pad_06D1[0xF]; // offset 0x6D1
    bool m_Entity_bEnabled; // offset 0x6E0, size 0x1, align 1
    char _pad_06E1[0x7]; // offset 0x6E1
};
