#pragma once

struct VPhysics2ShapeDef_t  // sizeof 0x68, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlLeanVector< RnSphereDesc_t > m_spheres; // offset 0x0, size 0x10, align 8
    CUtlLeanVector< RnCapsuleDesc_t > m_capsules; // offset 0x10, size 0x10, align 8
    CUtlLeanVector< RnHullDesc_t > m_hulls; // offset 0x20, size 0x10, align 8
    CUtlLeanVector< RnMeshDesc_t > m_meshes; // offset 0x30, size 0x10, align 8
    CUtlLeanVector< RnCompoundDesc_t > m_compounds; // offset 0x40, size 0x10, align 8
    CUtlVector< uint16 > m_CollisionAttributeIndices; // offset 0x50, size 0x18, align 8
};
