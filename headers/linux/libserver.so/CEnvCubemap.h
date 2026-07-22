#pragma once

class CEnvCubemap : public CBaseEntity /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x7F8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x7F8, size 0x8, align 8
    bool m_Entity_bCustomCubemapTexture; // offset 0x800, size 0x1, align 1
    char _pad_0801[0x3]; // offset 0x801
    float32 m_Entity_flInfluenceRadius; // offset 0x804, size 0x4, align 4
    Vector m_Entity_vBoxProjectMins; // offset 0x808, size 0xC, align 4
    Vector m_Entity_vBoxProjectMaxs; // offset 0x814, size 0xC, align 4
    bool m_Entity_bMoveable; // offset 0x820, size 0x1, align 1
    char _pad_0821[0x3]; // offset 0x821
    int32 m_Entity_nHandshake; // offset 0x824, size 0x4, align 4
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x828, size 0x4, align 4
    int32 m_Entity_nPriority; // offset 0x82C, size 0x4, align 4
    float32 m_Entity_flEdgeFadeDist; // offset 0x830, size 0x4, align 4
    Vector m_Entity_vEdgeFadeDists; // offset 0x834, size 0xC, align 4
    float32 m_Entity_flDiffuseScale; // offset 0x840, size 0x4, align 4
    bool m_Entity_bStartDisabled; // offset 0x844, size 0x1, align 1
    bool m_Entity_bDefaultEnvMap; // offset 0x845, size 0x1, align 1
    bool m_Entity_bDefaultSpecEnvMap; // offset 0x846, size 0x1, align 1
    bool m_Entity_bIndoorCubeMap; // offset 0x847, size 0x1, align 1
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // offset 0x848, size 0x1, align 1
    char _pad_0849[0xF]; // offset 0x849
    bool m_Entity_bEnabled; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x7]; // offset 0x859
};
