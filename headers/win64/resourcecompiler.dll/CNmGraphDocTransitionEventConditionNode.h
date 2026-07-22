#pragma once

class CNmGraphDocTransitionEventConditionNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    NmTransitionRuleCondition_t m_ruleCondition; // offset 0x100, size 0x1, align 1
    bool m_bMatchOnlySpecificMarkerID; // offset 0x101, size 0x1, align 1
    char _pad_0102[0x6]; // offset 0x102
    CGlobalSymbol m_markerIDToMatch; // offset 0x108, size 0x8, align 8 | MPropertyAttributeEditor
    bool m_bLimitSearchToSourceState; // offset 0x110, size 0x1, align 1 | MPropertyGroupName
    bool m_bIgnoreInactiveBranchEvents; // offset 0x111, size 0x1, align 1 | MPropertyGroupName
    char _pad_0112[0x6]; // offset 0x112
};
