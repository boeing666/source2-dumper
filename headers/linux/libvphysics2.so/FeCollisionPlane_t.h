#pragma once

struct FeCollisionPlane_t  // sizeof 0x18, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16 nCtrlParent; // offset 0x0, size 0x2, align 2
    uint16 nChildNode; // offset 0x2, size 0x2, align 2
    RnPlane_t m_Plane; // offset 0x4, size 0x10, align 4
    float32 flStrength; // offset 0x14, size 0x4, align 4
};
