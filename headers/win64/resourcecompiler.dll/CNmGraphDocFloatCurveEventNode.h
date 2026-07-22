#pragma once

class CNmGraphDocFloatCurveEventNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CGlobalSymbol m_matchID; // offset 0x100, size 0x8, align 8
    float32 m_flDefaultValue; // offset 0x108, size 0x4, align 4
    NmEventPriorityRule_t m_priorityRule; // offset 0x10C, size 0x1, align 1 | MPropertyGroupName
    bool m_bLimitSearchToSourceState; // offset 0x10D, size 0x1, align 1 | MPropertyGroupName
    bool m_bIgnoreInactiveBranchEvents; // offset 0x10E, size 0x1, align 1 | MPropertyGroupName
    char _pad_010F[0x1]; // offset 0x10F
};
