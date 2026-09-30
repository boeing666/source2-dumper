#pragma once

struct EventFrameBoundary_t  // sizeof 0x4, align 0xFF [trivial_ctor trivial_dtor] (soundsystem)
{
    float32 m_flFrameTime; // offset 0x0, size 0x4, align 4
};
