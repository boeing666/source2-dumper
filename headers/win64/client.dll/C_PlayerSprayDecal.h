#pragma once

class C_PlayerSprayDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    int32 m_nUniqueID; // offset 0x9A8, size 0x4, align 4 | MNetworkEnable
    uint32 m_unAccountID; // offset 0x9AC, size 0x4, align 4 | MNetworkEnable
    uint32 m_unTraceID; // offset 0x9B0, size 0x4, align 4 | MNetworkEnable
    Vector m_vecEndPos; // offset 0x9B4, size 0xC, align 4 | MNetworkEnable
    Vector m_vecStart; // offset 0x9C0, size 0xC, align 4 | MNetworkEnable
    Vector m_vecLeft; // offset 0x9CC, size 0xC, align 4 | MNetworkEnable
    Vector m_vecNormal; // offset 0x9D8, size 0xC, align 4 | MNetworkEnable
    CPlayerSlot m_nPlayerSlot; // offset 0x9E4, size 0x4, align 4 | MNetworkEnable
    int32 m_nEntity; // offset 0x9E8, size 0x4, align 4 | MNetworkEnable
    int32 m_nHitbox; // offset 0x9EC, size 0x4, align 4 | MNetworkEnable
    float32 m_flCreationTime; // offset 0x9F0, size 0x4, align 4 | MNetworkEnable
    int32 m_nTintID; // offset 0x9F4, size 0x4, align 4 | MNetworkEnable
    uint8 m_nVersion; // offset 0x9F8, size 0x1, align 1 | MNetworkEnable
    char _pad_09F9[0x7]; // offset 0x9F9
    CUtlString m_sTextureName; // offset 0xA00, size 0x8, align 8 | MNetworkEnable
    CUtlString m_sTextureNameDamaged; // offset 0xA08, size 0x8, align 8 | MNetworkEnable
    CUtlString m_sSoundNameDamaged; // offset 0xA10, size 0x8, align 8 | MNetworkEnable
    bool m_bDamaged; // offset 0xA18, size 0x1, align 1 | MNetworkEnable
    char _pad_0A19[0xF]; // offset 0xA19
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // offset 0xA28, size 0x60, align 255
};
