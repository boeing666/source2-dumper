#pragma once

class CNmGraphDocIDEventPercentageThroughNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    NmEventPriorityRule_t m_priorityRule; // offset 0x108, size 0x1, align 1 | MPropertyGroupName
    bool m_bLimitSearchToSourceState; // offset 0x109, size 0x1, align 1 | MPropertyGroupName
    bool m_bIgnoreInactiveBranchEvents; // offset 0x10A, size 0x1, align 1 | MPropertyGroupName
    char _pad_010B[0x5]; // offset 0x10B
    CGlobalSymbol m_eventID; // offset 0x110, size 0x8, align 8 | MPropertyAttributeEditor
};
