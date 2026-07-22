#pragma once

class CEnvCubemap : public CBaseEntity /*0x0*/  // sizeof 0x580, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x518]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x518, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x520, size 0x1, align 1
    char _pad_0521[0x3]; // offset 0x521
    float32 m_Entity_flInfluenceRadius; // offset 0x524, size 0x4, align 4
    Vector m_Entity_vBoxProjectMins; // offset 0x528, size 0xC, align 4
    Vector m_Entity_vBoxProjectMaxs; // offset 0x534, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x540, size 0x1, align 1
    char _pad_0541[0x3]; // offset 0x541
    int32 m_Entity_nHandshake; // offset 0x544, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x548, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x54C, size 0x4, align 4
    float32 m_Entity_flEdgeFadeDist; // offset 0x550, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x554, size 0xC, align 4
    float32 m_Entity_flDiffuseScale; // offset 0x560, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x564, size 0x1, align 1
    bool m_Entity_bDefaultEnvMap; // offset 0x565, size 0x1, align 1
    bool m_Entity_bDefaultSpecEnvMap; // offset 0x566, size 0x1, align 1
    bool m_Entity_bIndoorCubeMap; // offset 0x567, size 0x1, align 1
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // offset 0x568, size 0x1, align 1
    char _pad_0569[0xF]; // offset 0x569
    bool m_Entity_bEnabled; // offset 0x578, size 0x1, align 1
    char _pad_0579[0x7]; // offset 0x579
};
