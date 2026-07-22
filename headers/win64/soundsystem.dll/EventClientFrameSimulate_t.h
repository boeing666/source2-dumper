#pragma once

struct EventClientFrameSimulate_t  // sizeof 0x38, align 0xFF [trivial_dtor] (soundsystem)
{
    EngineLoopState_t m_LoopState; // offset 0x0, size 0x28, align 255
    float32 m_flRealTime; // offset 0x28, size 0x4, align 4
    float32 m_flFrameTime; // offset 0x2C, size 0x4, align 4
    bool m_bScheduleSendTickPacket; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x7]; // offset 0x31
};
