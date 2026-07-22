#pragma once

struct RnSoftbodyCapsule_t  // sizeof 0x20, align 0x4 [trivial_ctor trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    Vector[2] m_vCenter; // offset 0x0, size 0x18, align 4
    float32 m_flRadius; // offset 0x18, size 0x4, align 4
    uint16[2] m_nParticle; // offset 0x1C, size 0x4, align 2
};
