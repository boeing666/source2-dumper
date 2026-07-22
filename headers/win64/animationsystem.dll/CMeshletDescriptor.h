#pragma once

class CMeshletDescriptor  // sizeof 0x18, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
public:
    PackedAABB_t m_PackedAABB; // offset 0x0, size 0x8, align 255
    CDrawCullingData m_CullingData; // offset 0x8, size 0x4, align 1
    uint32 m_nVertexOffset; // offset 0xC, size 0x4, align 4
    uint32 m_nTriangleOffset; // offset 0x10, size 0x4, align 4
    uint8 m_nVertexCount; // offset 0x14, size 0x1, align 1
    uint8 m_nTriangleCount; // offset 0x15, size 0x1, align 1
    char _pad_0016[0x2]; // offset 0x16
};
