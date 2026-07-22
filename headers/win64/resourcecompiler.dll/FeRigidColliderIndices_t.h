#pragma once

struct FeRigidColliderIndices_t  // sizeof 0xA, align 0x2 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16 m_nTaperedCapsuleRigidIndex; // offset 0x0, size 0x2, align 2
    uint16 m_nSphereRigidIndex; // offset 0x2, size 0x2, align 2
    uint16 m_nBoxRigidIndex; // offset 0x4, size 0x2, align 2
    uint16 m_nSDFRigidIndex; // offset 0x6, size 0x2, align 2
    uint16 m_nCollisionPlaneIndex; // offset 0x8, size 0x2, align 2
};
