#pragma once

class CNmGraphDocIDEventConditionNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    NmEventConditionOperator_t m_operator; // offset 0x100, size 0x1, align 1
    CNmGraphDocIDEventConditionNode::SearchRule_t m_searchRule; // offset 0x101, size 0x1, align 1
    bool m_bLimitSearchToSourceState; // offset 0x102, size 0x1, align 1 | MPropertyGroupName
    bool m_bIgnoreInactiveBranchEvents; // offset 0x103, size 0x1, align 1 | MPropertyGroupName
    char _pad_0104[0x4]; // offset 0x104
    CUtlVector< CGlobalSymbol > m_eventIDs; // offset 0x108, size 0x18, align 8 | MPropertyGroupName MPropertyAttributeEditor MPropertyAutoExpandSelf
};
