#pragma once

class CPlayerSprayDecal : public CBaseModelEntity /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    int32 m_nUniqueID; // offset 0x878, size 0x4, align 4
    uint32 m_unAccountID; // offset 0x87C, size 0x4, align 4
    uint32 m_unTraceID; // offset 0x880, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0x884, size 0xC, align 4
    VectorWS m_vecStart; // offset 0x890, size 0xC, align 4
    Vector m_vecLeft; // offset 0x89C, size 0xC, align 4
    Vector m_vecNormal; // offset 0x8A8, size 0xC, align 4
    CPlayerSlot m_nPlayerSlot; // offset 0x8B4, size 0x4, align 4
    int32 m_nEntity; // offset 0x8B8, size 0x4, align 4
    int32 m_nHitbox; // offset 0x8BC, size 0x4, align 4
    float32 m_flCreationTime; // offset 0x8C0, size 0x4, align 4
    int32 m_nTintID; // offset 0x8C4, size 0x4, align 4
    uint8 m_nVersion; // offset 0x8C8, size 0x1, align 1
    char _pad_08C9[0x7]; // offset 0x8C9
    CUtlString m_sTextureName; // offset 0x8D0, size 0x8, align 8
    CUtlString m_sTextureNameDamaged; // offset 0x8D8, size 0x8, align 8
    CUtlString m_sSoundNameDamaged; // offset 0x8E0, size 0x8, align 8
    bool m_bDamaged; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x7]; // offset 0x8E9
};
