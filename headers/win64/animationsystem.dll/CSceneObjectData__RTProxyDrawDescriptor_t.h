#pragma once

struct CSceneObjectData::RTProxyDrawDescriptor_t  // sizeof 0x140, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CMaterialDrawDescriptor m_drawDesc; // offset 0x0, size 0x108, align 8
    matrix3x4_t m_mWorldFromLocal; // offset 0x108, size 0x30, align 4
    VertexAlbedoFormat_t m_nVertexAlbedoFormat; // offset 0x138, size 0x1, align 1
    int8 m_nVertexAlbedoVB; // offset 0x139, size 0x1, align 1
    uint16 m_nVertexAlbedoOffset; // offset 0x13A, size 0x2, align 2
    uint16 m_nVertexAlbedoStride; // offset 0x13C, size 0x2, align 2
    char _pad_013E[0x2]; // offset 0x13E
};
