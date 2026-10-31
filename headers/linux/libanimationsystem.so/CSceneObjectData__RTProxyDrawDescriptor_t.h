#pragma once

struct CSceneObjectData::RTProxyDrawDescriptor_t  // sizeof 0x168, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    uint32 m_materialGroupToken; // offset 0x0, size 0x4, align 4
    int32 m_nSrcDrawIndex; // offset 0x4, size 0x4, align 4
    CMaterialDrawDescriptor m_drawDesc; // offset 0x8, size 0x120, align 8
    matrix3x4_t m_mWorldFromLocal; // offset 0x128, size 0x30, align 4
    VertexAlbedoFormat_t m_nVertexAlbedoFormat; // offset 0x158, size 0x1, align 1
    int8 m_nVertexAlbedoVB; // offset 0x159, size 0x1, align 1
    uint16 m_nVertexAlbedoOffset; // offset 0x15A, size 0x2, align 2
    uint16 m_nVertexAlbedoStride; // offset 0x15C, size 0x2, align 2
    VertexAlbedoFormat_t m_nVertexEmissiveFormat; // offset 0x15E, size 0x1, align 1
    int8 m_nVertexEmissiveVB; // offset 0x15F, size 0x1, align 1
    uint16 m_nVertexEmissiveOffset; // offset 0x160, size 0x2, align 2
    uint16 m_nVertexEmissiveStride; // offset 0x162, size 0x2, align 2
    float32 m_fEmissiveFactor; // offset 0x164, size 0x4, align 4
};
