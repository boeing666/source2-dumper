#pragma once

class CNavSmartGoalHelper  // sizeof 0x108, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x100]; // offset 0x0
    bool m_bExecuteQueuedGoal; // offset 0x100, size 0x1, align 1
    char _pad_0101[0x7]; // offset 0x101
};
