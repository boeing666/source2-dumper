#pragma once

struct SkeletonAnimCapture_t::Camera_t  // sizeof 0x30, align 0x10 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
    CTransform m_tmCamera; // offset 0x0, size 0x20, align 16
    float32 m_flTime; // offset 0x20, size 0x4, align 4
    char _pad_0024[0xC]; // offset 0x24
};
