#pragma once

struct RTProxyBLAS_t  // sizeof 0x44, align 0x4 [trivial_ctor trivial_dtor] (resourcecompiler) {MGetKV3ClassDefaults}
{
    uint32 m_nFirstIndex; // offset 0x0, size 0x4, align 4
    uint32 m_nIndexCount; // offset 0x4, size 0x4, align 4
    uint32 m_nVBByteOffset; // offset 0x8, size 0x4, align 4
    uint32 m_nBaseVertex; // offset 0xC, size 0x4, align 4
    uint16 m_nVertexCount; // offset 0x10, size 0x2, align 2
    VertexAlbedoFormat_t m_albedoFormat; // offset 0x12, size 0x1, align 1
    char _pad_0013[0x1]; // offset 0x13
    AABB_t m_boundLs; // offset 0x14, size 0x18, align 255
    Vector m_vVertexOriginLs; // offset 0x2C, size 0xC, align 4
    Vector m_vVertexExtentLs; // offset 0x38, size 0xC, align 4
};
