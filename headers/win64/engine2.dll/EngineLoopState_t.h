#pragma once

struct EngineLoopState_t  // sizeof 0x28, align 0xFF [trivial_ctor trivial_dtor] (engine2)
{
    char _pad_0000[0x18]; // offset 0x0
    int32 m_nPlatWindowWidth; // offset 0x18, size 0x4, align 4
    int32 m_nPlatWindowHeight; // offset 0x1C, size 0x4, align 4
    int32 m_nRenderWidth; // offset 0x20, size 0x4, align 4
    int32 m_nRenderHeight; // offset 0x24, size 0x4, align 4
};
