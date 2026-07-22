#pragma once

struct EventClientPollInput_t  // sizeof 0x30, align 0xFF [trivial_dtor] (soundsystem)
{
    EngineLoopState_t m_LoopState; // offset 0x0, size 0x28, align 255
    float32 m_flRealTime; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
