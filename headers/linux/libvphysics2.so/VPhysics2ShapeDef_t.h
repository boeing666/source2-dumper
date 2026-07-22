#pragma once

struct VPhysics2ShapeDef_t  // sizeof 0x78, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlVector< RnSphereDesc_t > m_spheres; // offset 0x0, size 0x18, align 8
    CUtlVector< RnCapsuleDesc_t > m_capsules; // offset 0x18, size 0x18, align 8
    CUtlVector< RnHullDesc_t > m_hulls; // offset 0x30, size 0x18, align 8
    CUtlVector< RnMeshDesc_t > m_meshes; // offset 0x48, size 0x18, align 8
    CUtlVector< uint16 > m_CollisionAttributeIndices; // offset 0x60, size 0x18, align 8
};
