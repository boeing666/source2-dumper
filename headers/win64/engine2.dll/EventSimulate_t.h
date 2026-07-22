#pragma once

struct EventSimulate_t  // sizeof 0x30, align 0xFF [trivial_dtor] (engine2)
{
    EngineLoopState_t m_LoopState; // offset 0x0, size 0x28, align 255
    bool m_bFirstTick; // offset 0x28, size 0x1, align 1
    bool m_bLastTick; // offset 0x29, size 0x1, align 1
    char _pad_002A[0x6]; // offset 0x2A
};
