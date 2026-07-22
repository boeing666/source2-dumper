#pragma once

struct RnSphereDesc_t : public RnShapeDesc_t /*0x0*/  // sizeof 0x28, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x18]; // offset 0x0
    RnSphere_t m_Sphere; // offset 0x18, size 0x10, align 4
};
