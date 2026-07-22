#pragma once

struct EventClientProcessInput_t  // sizeof 0x38, align 0xFF [trivial_dtor] (client)
{
    EngineLoopState_t m_LoopState; // offset 0x0, size 0x28, align 255
    float32 m_flRealTime; // offset 0x28, size 0x4, align 4
    float32 m_flTickInterval; // offset 0x2C, size 0x4, align 4
    float64 m_flTickStartTime; // offset 0x30, size 0x8, align 8
};
