#pragma once

struct CastSphereSATParams_t  // sizeof 0x30, align 0x8 [trivial_ctor trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    Vector m_vRayStart; // offset 0x0, size 0xC, align 4
    Vector m_vRayDelta; // offset 0xC, size 0xC, align 4
    float32 m_flRadius; // offset 0x18, size 0x4, align 4
    float32 m_flMaxFraction; // offset 0x1C, size 0x4, align 4
    float32 m_flScale; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    RnHull_t* m_pHull; // offset 0x28, size 0x8, align 8
};
