#pragma once

struct EventClientPostOutput_t  // sizeof 0x40, align 0xFF [trivial_dtor] (engine2)
{
    EngineLoopState_t m_LoopState; // offset 0x0, size 0x28, align 255
    float64 m_flRenderTime; // offset 0x28, size 0x8, align 8
    float32 m_flRenderFrameTime; // offset 0x30, size 0x4, align 4
    float32 m_flRenderFrameTimeUnbounded; // offset 0x34, size 0x4, align 4
    bool m_bRenderOnly; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x7]; // offset 0x39
};
