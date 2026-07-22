#pragma once

class CStateMachineComponentUpdater : public CAnimComponentUpdater /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CAnimStateMachineUpdater m_stateMachine; // offset 0x30, size 0x58, align 8
};
