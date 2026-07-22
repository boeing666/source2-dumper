#pragma once

class C_EnvCubemap : public C_BaseEntity /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x7F0, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x7F8, size 0x1, align 1
    char _pad_07F9[0x3]; // offset 0x7F9
    float32 m_Entity_flInfluenceRadius; // offset 0x7FC, size 0x4, align 4
    Vector m_Entity_vBoxProjectMins; // offset 0x800, size 0xC, align 4
    Vector m_Entity_vBoxProjectMaxs; // offset 0x80C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x818, size 0x1, align 1
    char _pad_0819[0x3]; // offset 0x819
    int32 m_Entity_nHandshake; // offset 0x81C, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x820, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x824, size 0x4, align 4
    float32 m_Entity_flEdgeFadeDist; // offset 0x828, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x82C, size 0xC, align 4
    float32 m_Entity_flDiffuseScale; // offset 0x838, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x83C, size 0x1, align 1
    bool m_Entity_bDefaultEnvMap; // offset 0x83D, size 0x1, align 1
    bool m_Entity_bDefaultSpecEnvMap; // offset 0x83E, size 0x1, align 1
    bool m_Entity_bIndoorCubeMap; // offset 0x83F, size 0x1, align 1
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // offset 0x840, size 0x1, align 1
    char _pad_0841[0xF]; // offset 0x841
    bool m_Entity_bEnabled; // offset 0x850, size 0x1, align 1
    char _pad_0851[0x7]; // offset 0x851
};
