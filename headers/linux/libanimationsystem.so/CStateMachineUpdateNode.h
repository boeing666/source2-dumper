#pragma once

class CStateMachineUpdateNode : public CAnimUpdateNodeBase /*0x0*/  // sizeof 0x100, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CAnimStateMachineUpdater m_stateMachine; // offset 0x70, size 0x58, align 8
    CUtlVector< CStateNodeStateData > m_stateData; // offset 0xC8, size 0x18, align 8
    CUtlVector< CStateNodeTransitionData > m_transitionData; // offset 0xE0, size 0x18, align 8
    char _pad_00F8[0x4]; // offset 0xF8
    bool m_bBlockWaningTags; // offset 0xFC, size 0x1, align 1
    bool m_bLockStateWhenWaning; // offset 0xFD, size 0x1, align 1
    bool m_bResetWhenActivated; // offset 0xFE, size 0x1, align 1
    char _pad_00FF[0x1]; // offset 0xFF
};
