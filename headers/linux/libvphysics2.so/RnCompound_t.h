#pragma once

struct RnCompound_t  // sizeof 0x160, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    RnCompoundTree_t m_Tree; // offset 0x0, size 0x18, align 8
    int32 m_nHullBaseIndex; // offset 0x18, size 0x4, align 4
    int32 m_nMeshBaseIndex; // offset 0x1C, size 0x4, align 4
    int32 m_nShapeCount; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlLeanVectorFixedGrowable< RnMesh_t, 1 > m_Meshes; // offset 0x28, size 0xC8, align 8
    CUtlLeanVector< RnHull_t > m_Hulls; // offset 0xF0, size 0x10, align 8
    CUtlLeanVector< RnCapsule_t > m_Capsules; // offset 0x100, size 0x10, align 8
    CUtlLeanVector< RnSphere_t > m_Spheres; // offset 0x110, size 0x10, align 8
    CUtlLeanVector< uint8 > m_CompoundMaterialIndices; // offset 0x120, size 0x10, align 8
    AABB_t m_Bounds; // offset 0x130, size 0x18, align 255
    Vector m_vOrthographicAreas; // offset 0x148, size 0xC, align 4
    float32 m_flSurfaceArea; // offset 0x154, size 0x4, align 4
    float32 m_flVolume; // offset 0x158, size 0x4, align 4
    char _pad_015C[0x4]; // offset 0x15C
};
