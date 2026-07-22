#pragma once

class CAnimGraphDoc_NodeState : public CAnimGraphDoc_State /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x80, size 0x8, align 4 | MPropertySuppressField
    bool m_bIsRootMotionExclusive; // offset 0x88, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIsRootMotionExclusiveFirstFrame; // offset 0x89, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_008A[0x6]; // offset 0x8A
};
