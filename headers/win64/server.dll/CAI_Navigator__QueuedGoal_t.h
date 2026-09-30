#pragma once

struct CAI_Navigator::QueuedGoal_t  // sizeof 0x460, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    AI_NavGoal_t m_goal; // offset 0x8, size 0x448, align 8
    AI_NavSetGoalFlags_t m_goalFlags; // offset 0x450, size 0x4, align 4
    char _pad_0454[0x4]; // offset 0x454
    CAI_Path* m_pPath; // offset 0x458, size 0x8, align 8
};
