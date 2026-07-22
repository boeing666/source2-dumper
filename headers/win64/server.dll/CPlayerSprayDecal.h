#pragma once

class CPlayerSprayDecal : public CBaseModelEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    int32 m_nUniqueID; // offset 0x780, size 0x4, align 4 | MNetworkEnable
    uint32 m_unAccountID; // offset 0x784, size 0x4, align 4 | MNetworkEnable
    uint32 m_unTraceID; // offset 0x788, size 0x4, align 4 | MNetworkEnable
    Vector m_vecEndPos; // offset 0x78C, size 0xC, align 4 | MNetworkEnable
    Vector m_vecStart; // offset 0x798, size 0xC, align 4 | MNetworkEnable
    Vector m_vecLeft; // offset 0x7A4, size 0xC, align 4 | MNetworkEnable
    Vector m_vecNormal; // offset 0x7B0, size 0xC, align 4 | MNetworkEnable
    CPlayerSlot m_nPlayerSlot; // offset 0x7BC, size 0x4, align 4 | MNetworkEnable
    int32 m_nEntity; // offset 0x7C0, size 0x4, align 4 | MNetworkEnable
    int32 m_nHitbox; // offset 0x7C4, size 0x4, align 4 | MNetworkEnable
    float32 m_flCreationTime; // offset 0x7C8, size 0x4, align 4 | MNetworkEnable
    int32 m_nTintID; // offset 0x7CC, size 0x4, align 4 | MNetworkEnable
    uint8 m_nVersion; // offset 0x7D0, size 0x1, align 1 | MNetworkEnable
    char _pad_07D1[0x7]; // offset 0x7D1
    CUtlString m_sTextureName; // offset 0x7D8, size 0x8, align 8 | MNetworkEnable
    CUtlString m_sTextureNameDamaged; // offset 0x7E0, size 0x8, align 8 | MNetworkEnable
    CUtlString m_sSoundNameDamaged; // offset 0x7E8, size 0x8, align 8 | MNetworkEnable
    bool m_bDamaged; // offset 0x7F0, size 0x1, align 1 | MNetworkEnable
    char _pad_07F1[0x7]; // offset 0x7F1
};
