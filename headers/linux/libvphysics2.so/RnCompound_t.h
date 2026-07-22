#pragma once

struct RnCompound_t  // sizeof 0x90, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    CUtlVector< RnSphere_t > m_Spheres; // offset 0x0, size 0x18, align 8
    CUtlVector< RnCapsule_t > m_Capsules; // offset 0x18, size 0x18, align 8
    CUtlVector< RnHull_t > m_Hulls; // offset 0x30, size 0x18, align 8
    CUtlVector< RnMesh_t > m_Meshes; // offset 0x48, size 0x18, align 8
    AABB_t m_Bounds; // offset 0x60, size 0x18, align 255
    Vector m_vOrthographicAreas; // offset 0x78, size 0xC, align 4
    float32 m_flSurfaceArea; // offset 0x84, size 0x4, align 4
    float32 m_flVolume; // offset 0x88, size 0x4, align 4
    char _pad_008C[0x4]; // offset 0x8C
};
