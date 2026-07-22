#pragma once

class CLogicDistanceAutosave : public CLogicalEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_iszTargetEntity; // offset 0x778, size 0x8, align 8
    float32 m_flDistanceToPlayer; // offset 0x780, size 0x4, align 4
    bool m_bForceNewLevelUnit; // offset 0x784, size 0x1, align 1
    bool m_bCheckCough; // offset 0x785, size 0x1, align 1
    bool m_bThinkDangerous; // offset 0x786, size 0x1, align 1 | MNotSaved
    char _pad_0787[0x1]; // offset 0x787
    float32 m_flDangerousTime; // offset 0x788, size 0x4, align 4 | MNotSaved
    char _pad_078C[0x4]; // offset 0x78C
};
