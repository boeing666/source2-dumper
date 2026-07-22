#pragma once

class CNmGraphDocFootstepEventPercentageThroughNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    NmFootPhaseCondition_t m_phaseCondition; // offset 0x100, size 0x1, align 1
    NmEventPriorityRule_t m_priorityRule; // offset 0x101, size 0x1, align 1 | MPropertyGroupName
    bool m_bLimitSearchToSourceState; // offset 0x102, size 0x1, align 1 | MPropertyGroupName
    bool m_bIgnoreInactiveBranchEvents; // offset 0x103, size 0x1, align 1 | MPropertyGroupName
    char _pad_0104[0x4]; // offset 0x104
};
