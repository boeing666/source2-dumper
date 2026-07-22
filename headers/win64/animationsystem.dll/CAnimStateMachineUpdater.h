#pragma once

class CAnimStateMachineUpdater  // sizeof 0x58, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< CStateUpdateData > m_states; // offset 0x8, size 0x18, align 8
    CUtlVector< CTransitionUpdateData > m_transitions; // offset 0x20, size 0x18, align 8
    char _pad_0038[0x18]; // offset 0x38
    int32 m_startStateIndex; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
};
