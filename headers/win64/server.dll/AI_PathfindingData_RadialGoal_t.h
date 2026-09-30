#pragma once

struct AI_PathfindingData_RadialGoal_t  // sizeof 0x70, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CRelativeLocation m_Center; // offset 0x0, size 0x48, align 8
    float32 m_flRadius; // offset 0x48, size 0x4, align 4
    float32 m_flRelArc; // offset 0x4C, size 0x4, align 4
    float32 m_flMinAllowedRadius; // offset 0x50, size 0x4, align 4
    RadialGoalFlags_t m_nFlags; // offset 0x54, size 0x4, align 4
    Vector m_vUp; // offset 0x58, size 0xC, align 4
    char _pad_0064[0xC]; // offset 0x64
};
