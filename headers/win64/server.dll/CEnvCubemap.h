#pragma once

class CEnvCubemap : public CBaseEntity /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x530]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x530, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x538, size 0x1, align 1
    char _pad_0539[0x3]; // offset 0x539
    float32 m_Entity_flInfluenceRadius; // offset 0x53C, size 0x4, align 4
    Vector m_Entity_vBoxProjectMins; // offset 0x540, size 0xC, align 4
    Vector m_Entity_vBoxProjectMaxs; // offset 0x54C, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x558, size 0x1, align 1
    char _pad_0559[0x3]; // offset 0x559
    int32 m_Entity_nHandshake; // offset 0x55C, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x560, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x564, size 0x4, align 4
    float32 m_Entity_flEdgeFadeDist; // offset 0x568, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x56C, size 0xC, align 4
    float32 m_Entity_flDiffuseScale; // offset 0x578, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x57C, size 0x1, align 1
    bool m_Entity_bDefaultEnvMap; // offset 0x57D, size 0x1, align 1
    bool m_Entity_bDefaultSpecEnvMap; // offset 0x57E, size 0x1, align 1
    bool m_Entity_bIndoorCubeMap; // offset 0x57F, size 0x1, align 1
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // offset 0x580, size 0x1, align 1
    char _pad_0581[0xF]; // offset 0x581
    bool m_Entity_bEnabled; // offset 0x590, size 0x1, align 1
    char _pad_0591[0x7]; // offset 0x591
};
