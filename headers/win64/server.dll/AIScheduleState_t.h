#pragma once

struct AIScheduleState_t  // sizeof 0x14, align 0xFF [trivial_dtor] (server)
{
    int32 m_nCurTask; // offset 0x0, size 0x4, align 4
    TaskStatus_t m_nTaskStatus; // offset 0x4, size 0x4, align 4
    GameTime_t m_flTimeStarted; // offset 0x8, size 0x4, align 255
    GameTime_t m_flTimeCurTaskStarted; // offset 0xC, size 0x4, align 255
    AI_TaskFailureCode_t m_taskFailureCode; // offset 0x10, size 0x2, align 2
    bool m_bScheduleWasInterrupted; // offset 0x12, size 0x1, align 1
    char _pad_0013[0x1]; // offset 0x13
};
