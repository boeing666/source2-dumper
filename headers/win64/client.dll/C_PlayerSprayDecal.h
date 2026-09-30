#pragma once

class C_PlayerSprayDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xC90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    int32 m_nUniqueID; // offset 0xBB0, size 0x4, align 4
    uint32 m_unAccountID; // offset 0xBB4, size 0x4, align 4
    uint32 m_unTraceID; // offset 0xBB8, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0xBBC, size 0xC, align 4
    VectorWS m_vecStart; // offset 0xBC8, size 0xC, align 4
    Vector m_vecLeft; // offset 0xBD4, size 0xC, align 4
    Vector m_vecNormal; // offset 0xBE0, size 0xC, align 4
    CPlayerSlot m_nPlayerSlot; // offset 0xBEC, size 0x4, align 4
    int32 m_nEntity; // offset 0xBF0, size 0x4, align 4
    int32 m_nHitbox; // offset 0xBF4, size 0x4, align 4
    float32 m_flCreationTime; // offset 0xBF8, size 0x4, align 4
    int32 m_nTintID; // offset 0xBFC, size 0x4, align 4
    uint8 m_nVersion; // offset 0xC00, size 0x1, align 1
    char _pad_0C01[0x7]; // offset 0xC01
    CUtlString m_sTextureName; // offset 0xC08, size 0x8, align 8
    CUtlString m_sTextureNameDamaged; // offset 0xC10, size 0x8, align 8
    CUtlString m_sSoundNameDamaged; // offset 0xC18, size 0x8, align 8
    bool m_bDamaged; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0xF]; // offset 0xC21
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // offset 0xC30, size 0x60, align 255
};
