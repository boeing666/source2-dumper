#pragma once

struct VMixPannerDesc_t  // sizeof 0x8, align 0x4 [trivial_ctor trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    VMixPannerType_t m_type; // offset 0x0, size 0x4, align 4
    float32 m_flStrength; // offset 0x4, size 0x4, align 4
};
