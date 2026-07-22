#pragma once

struct RTProxyInstanceInfo_t  // sizeof 0x48, align 0x4 [trivial_dtor] (worldrenderer) {MGetKV3ClassDefaults}
{
    RTProxyInstanceFlags_t m_nFlags; // offset 0x0, size 0x1, align 1
    VertexAlbedoFormat_t m_albedoFormat; // offset 0x1, size 0x1, align 1
    VertexAlbedoFormat_t m_emissiveFormat; // offset 0x2, size 0x1, align 1
    char _pad_0003[0x1]; // offset 0x3
    uint16 m_nBLASCount; // offset 0x4, size 0x2, align 2
    char _pad_0006[0x2]; // offset 0x6
    uint32 m_nBLASIndex; // offset 0x8, size 0x4, align 4
    uint32 m_nVertexAlbedoByteOffset; // offset 0xC, size 0x4, align 4
    uint32 m_nVertexEmissiveByteOffset; // offset 0x10, size 0x4, align 4
    float32 m_fEmissiveFactor; // offset 0x14, size 0x4, align 4
    matrix3x4_t m_mWorldFromLocal; // offset 0x18, size 0x30, align 4
};
