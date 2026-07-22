#pragma once

struct RTProxyInstanceInfo_t  // sizeof 0x3C, align 0x4 [trivial_dtor] (resourcecompiler) {MGetKV3ClassDefaults}
{
    RTProxyInstanceFlags_t m_nFlags; // offset 0x0, size 0x1, align 1
    VertexAlbedoFormat_t m_albedoFormat; // offset 0x1, size 0x1, align 1
    uint16 m_nBLASCount; // offset 0x2, size 0x2, align 2
    uint32 m_nBLASIndex; // offset 0x4, size 0x4, align 4
    uint32 m_nVertexAlbedoByteOffset; // offset 0x8, size 0x4, align 4
    matrix3x4_t m_mWorldFromLocal; // offset 0xC, size 0x30, align 4
};
