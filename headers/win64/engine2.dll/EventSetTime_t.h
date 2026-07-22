#pragma once

struct EventSetTime_t  // sizeof 0x60, align 0xFF [trivial_dtor] (engine2)
{
    EngineLoopState_t m_LoopState; // offset 0x0, size 0x28, align 255
    int32 m_nClientOutputFrames; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    float64 m_flRealTime; // offset 0x30, size 0x8, align 8
    float64 m_flRenderTime; // offset 0x38, size 0x8, align 8
    float64 m_flRenderFrameTime; // offset 0x40, size 0x8, align 8
    float64 m_flRenderFrameTimeUnbounded; // offset 0x48, size 0x8, align 8
    float64 m_flRenderFrameTimeUnscaled; // offset 0x50, size 0x8, align 8
    float64 m_flTickRemainder; // offset 0x58, size 0x8, align 8
};
