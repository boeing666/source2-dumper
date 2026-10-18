#pragma once

class CStateMachineComponent : public CAnimGraphDoc_Component /*0x0*/, public CAnimGraphDoc_StateMachine /*0x38*/  // sizeof 0x68, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CUtlString m_sName; // offset 0x60, size 0x8, align 8 | MPropertyFriendlyName MPropertySortPriority
};
