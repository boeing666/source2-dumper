#pragma once

class CAnimGraphDoc_StateMachine  // sizeof 0x28, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_State > > m_states; // offset 0x8, size 0x18, align 8 | MPropertyHideField
    char _pad_0020[0x8]; // offset 0x20
};
