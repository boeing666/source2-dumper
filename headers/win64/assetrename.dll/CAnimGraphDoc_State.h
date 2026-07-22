#pragma once

class CAnimGraphDoc_State  // sizeof 0x80, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_StateTransition > > m_transitions; // offset 0x28, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CStateAction > m_actions; // offset 0x40, size 0x18, align 8 | MPropertySuppressField
    CUtlString m_name; // offset 0x58, size 0x8, align 8 | MPropertyFriendlyName MPropertySortPriority
    CUtlString m_sComment; // offset 0x60, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    AnimStateID m_stateID; // offset 0x68, size 0x4, align 4 | MPropertySuppressField
    Vector2D m_position; // offset 0x6C, size 0x8, align 4 | MPropertySuppressField
    bool m_bIsStartState; // offset 0x74, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIsEndtState; // offset 0x75, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIsInputToGraph; // offset 0x76, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIsPassthrough; // offset 0x77, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIsPassthroughRootMotion; // offset 0x78, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPreEvaluatePassthroughTransitionPath; // offset 0x79, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_007A[0x6]; // offset 0x7A
};
