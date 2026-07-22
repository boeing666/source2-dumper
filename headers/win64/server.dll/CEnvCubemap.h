#pragma once

class CEnvCubemap : public CBaseEntity /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x520]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // offset 0x520, size 0x8, align 8 | MNetworkEnable
    bool m_Entity_bCustomCubemapTexture; // offset 0x528, size 0x1, align 1 | MNetworkEnable
    char _pad_0529[0x3]; // offset 0x529
    float32 m_Entity_flInfluenceRadius; // offset 0x52C, size 0x4, align 4 | MNetworkEnable
    Vector m_Entity_vBoxProjectMins; // offset 0x530, size 0xC, align 4 | MNetworkEnable
    Vector m_Entity_vBoxProjectMaxs; // offset 0x53C, size 0xC, align 4 | MNetworkEnable
    bool m_Entity_bMoveable; // offset 0x548, size 0x1, align 1 | MNetworkEnable
    char _pad_0549[0x3]; // offset 0x549
    int32 m_Entity_nHandshake; // offset 0x54C, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nEnvCubeMapArrayIndex; // offset 0x550, size 0x4, align 4 | MNetworkEnable
    int32 m_Entity_nPriority; // offset 0x554, size 0x4, align 4 | MNetworkEnable
    float32 m_Entity_flEdgeFadeDist; // offset 0x558, size 0x4, align 4 | MNetworkEnable
    Vector m_Entity_vEdgeFadeDists; // offset 0x55C, size 0xC, align 4 | MNetworkEnable
    float32 m_Entity_flDiffuseScale; // offset 0x568, size 0x4, align 4 | MNetworkEnable
    bool m_Entity_bStartDisabled; // offset 0x56C, size 0x1, align 1 | MNetworkEnable
    bool m_Entity_bDefaultEnvMap; // offset 0x56D, size 0x1, align 1 | MNetworkEnable
    bool m_Entity_bDefaultSpecEnvMap; // offset 0x56E, size 0x1, align 1 | MNetworkEnable
    bool m_Entity_bIndoorCubeMap; // offset 0x56F, size 0x1, align 1 | MNetworkEnable
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // offset 0x570, size 0x1, align 1 | MNetworkEnable
    char _pad_0571[0xF]; // offset 0x571
    bool m_Entity_bEnabled; // offset 0x580, size 0x1, align 1 | MNetworkEnable
    char _pad_0581[0x7]; // offset 0x581
};
