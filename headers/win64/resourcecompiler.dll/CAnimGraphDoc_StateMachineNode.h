#pragma once

class CAnimGraphDoc_StateMachineNode : public CAnimGraphDoc_Node /*0x0*/, public CAnimGraphDoc_StateMachine /*0x40*/  // sizeof 0x70, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x68]; // offset 0x0
    bool m_bBlockWaningTags; // offset 0x68, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockStateWhenWaning; // offset 0x69, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bResetWhenActivated; // offset 0x6A, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_006B[0x5]; // offset 0x6B
};
