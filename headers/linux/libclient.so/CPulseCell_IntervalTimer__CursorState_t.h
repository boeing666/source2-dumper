#pragma once

struct CPulseCell_IntervalTimer::CursorState_t  // sizeof 0x14, align 0x4 [trivial_dtor] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    GameTime_t m_StartTime; // offset 0x0, size 0x4, align 255
    GameTime_t m_EndTime; // offset 0x4, size 0x4, align 255
    float32 m_flWaitInterval; // offset 0x8, size 0x4, align 4
    float32 m_flWaitIntervalHigh; // offset 0xC, size 0x4, align 4
    bool m_bCompleteOnNextWake; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
};
