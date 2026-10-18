#pragma once

class CAnimGraphDoc_StateTransition  // sizeof 0x70, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CAnimGraphDoc_ConditionContainer m_conditionList; // offset 0x28, size 0x30, align 8 | MPropertySuppressField
    AnimStateID m_srcState; // offset 0x58, size 0x4, align 4 | MPropertySuppressField
    AnimStateID m_destState; // offset 0x5C, size 0x4, align 4 | MPropertySuppressField
    CUtlString m_sComment; // offset 0x60, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    bool m_bDisabled; // offset 0x68, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0069[0x7]; // offset 0x69
};
