#pragma once

class CEnvCubemap : public CBaseEntity /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x528]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x528, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x530, size 0x1, align 1
    char _pad_0531[0x3]; // offset 0x531
    float32 m_Entity_flInfluenceRadius; // offset 0x534, size 0x4, align 4
    Vector m_Entity_vBoxProjectMins; // offset 0x538, size 0xC, align 4
    Vector m_Entity_vBoxProjectMaxs; // offset 0x544, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x550, size 0x1, align 1
    char _pad_0551[0x3]; // offset 0x551
    int32 m_Entity_nHandshake; // offset 0x554, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x558, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x55C, size 0x4, align 4
    float32 m_Entity_flEdgeFadeDist; // offset 0x560, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x564, size 0xC, align 4
    float32 m_Entity_flDiffuseScale; // offset 0x570, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x574, size 0x1, align 1
    bool m_Entity_bDefaultEnvMap; // offset 0x575, size 0x1, align 1
    bool m_Entity_bDefaultSpecEnvMap; // offset 0x576, size 0x1, align 1
    bool m_Entity_bIndoorCubeMap; // offset 0x577, size 0x1, align 1
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // offset 0x578, size 0x1, align 1
    char _pad_0579[0xF]; // offset 0x579
    bool m_Entity_bEnabled; // offset 0x588, size 0x1, align 1
    char _pad_0589[0x7]; // offset 0x589
};
