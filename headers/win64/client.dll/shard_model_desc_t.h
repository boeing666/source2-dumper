#pragma once

struct shard_model_desc_t  // sizeof 0x80, align 0xFF [vtable] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nModelID; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialBase; // offset 0x10, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageOverlay; // offset 0x18, size 0x8, align 8
    ShardSolid_t m_solid; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x3]; // offset 0x21
    Vector2D m_vecPanelSize; // offset 0x24, size 0x8, align 4
    Vector2D m_vecStressPositionA; // offset 0x2C, size 0x8, align 4
    Vector2D m_vecStressPositionB; // offset 0x34, size 0x8, align 4
    char _pad_003C[0x4]; // offset 0x3C
    C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // offset 0x40, size 0x18, align 8
    C_NetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices; // offset 0x58, size 0x18, align 8
    float32 m_flGlassHalfThickness; // offset 0x70, size 0x4, align 4
    bool m_bHasParent; // offset 0x74, size 0x1, align 1
    bool m_bParentFrozen; // offset 0x75, size 0x1, align 1
    char _pad_0076[0x2]; // offset 0x76
    CUtlStringToken m_SurfacePropStringToken; // offset 0x78, size 0x4, align 4
    char _pad_007C[0x4]; // offset 0x7C
};
