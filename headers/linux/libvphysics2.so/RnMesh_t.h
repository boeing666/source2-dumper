#pragma once

struct RnMesh_t  // sizeof 0xC0, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    Vector m_vMin; // offset 0x0, size 0xC, align 4
    Vector m_vMax; // offset 0xC, size 0xC, align 4
    CUtlVector< RnNode_t > m_Nodes; // offset 0x18, size 0x18, align 8
    CUtlVectorSIMDPaddedVector m_Vertices; // offset 0x30, size 0x18, align 8
    CUtlVector< RnTriangle_t > m_Triangles; // offset 0x48, size 0x18, align 8
    CUtlVector< RnWing_t > m_Wings; // offset 0x60, size 0x18, align 8
    CUtlVector< uint8 > m_TriangleEdgeFlags; // offset 0x78, size 0x18, align 8
    CUtlVector< uint8 > m_Materials; // offset 0x90, size 0x18, align 8
    Vector m_vOrthographicAreas; // offset 0xA8, size 0xC, align 4
    uint32 m_nFlags; // offset 0xB4, size 0x4, align 4
    uint32 m_nDebugFlags; // offset 0xB8, size 0x4, align 4
    char _pad_00BC[0x4]; // offset 0xBC
};
