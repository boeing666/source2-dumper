#pragma once

struct PointCameraSettings_t  // sizeof 0x10, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flNearBlurryDistance; // offset 0x0, size 0x4, align 4
    float32 m_flNearCrispDistance; // offset 0x4, size 0x4, align 4
    float32 m_flFarCrispDistance; // offset 0x8, size 0x4, align 4
    float32 m_flFarBlurryDistance; // offset 0xC, size 0x4, align 4
};
