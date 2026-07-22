#pragma once

class CMaterialDrawDescriptor  // sizeof 0x118, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    float32 m_flUvDensity; // offset 0x0, size 0x4, align 4
    Vector m_vTintColor; // offset 0x4, size 0xC, align 4
    float32 m_flAlpha; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x2]; // offset 0x14
    uint16 m_nNumMeshlets; // offset 0x16, size 0x2, align 2
    char _pad_0018[0x4]; // offset 0x18
    uint32 m_nFirstMeshlet; // offset 0x1C, size 0x4, align 4
    uint32 m_nAppliedIndexOffset; // offset 0x20, size 0x4, align 4
    uint8 m_nDepthVertexBufferIndex; // offset 0x24, size 0x1, align 1
    uint8 m_nMeshletPackedIVBIndex; // offset 0x25, size 0x1, align 1
    char _pad_0026[0x2]; // offset 0x26
    CUtlLeanVector< CMaterialDrawDescriptor::RigidMeshPart_t > m_rigidMeshParts; // offset 0x28, size 0x10, align 8
    CUtlLeanVector< uint16 > m_rootBvhNodes; // offset 0x38, size 0x10, align 8
    RenderPrimitiveType_t m_nPrimitiveType; // offset 0x48, size 0x4, align 4
    int32 m_nBaseVertex; // offset 0x4C, size 0x4, align 4
    int32 m_nVertexCount; // offset 0x50, size 0x4, align 4
    int32 m_nStartIndex; // offset 0x54, size 0x4, align 4
    int32 m_nIndexCount; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x64]; // offset 0x5C
    CRenderBufferBinding m_indexBuffer; // offset 0xC0, size 0x20, align 8
    CRenderBufferBinding m_meshletPackedIVB; // offset 0xE0, size 0x20, align 8
    char _pad_0100[0x10]; // offset 0x100
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_material; // offset 0x110, size 0x8, align 8
};
