#pragma once

struct RnHull_t  // sizeof 0xF8, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    Vector m_vCentroid; // offset 0x0, size 0xC, align 4
    float32 m_flMaxAngularRadius; // offset 0xC, size 0x4, align 4
    AABB_t m_Bounds; // offset 0x10, size 0x18, align 255
    Vector m_vOrthographicAreas; // offset 0x28, size 0xC, align 4
    matrix3x4_t m_MassProperties; // offset 0x34, size 0x30, align 4
    float32 m_flVolume; // offset 0x64, size 0x4, align 4
    float32 m_flSurfaceArea; // offset 0x68, size 0x4, align 4
    char _pad_006C[0x4]; // offset 0x6C
    CUtlVector< RnVertex_t > m_Vertices; // offset 0x70, size 0x18, align 8
    CUtlVector< Vector > m_VertexPositions; // offset 0x88, size 0x18, align 8
    CUtlVector< RnHalfEdge_t > m_Edges; // offset 0xA0, size 0x18, align 8
    CUtlVector< RnFace_t > m_Faces; // offset 0xB8, size 0x18, align 8
    CUtlVector< RnPlane_t > m_FacePlanes; // offset 0xD0, size 0x18, align 8
    uint32 m_nFlags; // offset 0xE8, size 0x4, align 4
    char _pad_00EC[0x4]; // offset 0xEC
    CRegionSVM* m_pRegionSVM; // offset 0xF0, size 0x8, align 8
};
