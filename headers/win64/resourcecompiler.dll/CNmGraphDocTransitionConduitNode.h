#pragma once

class CNmGraphDocTransitionConduitNode : public CNmGraphDocStateMachineGraphNode /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    V_uuid_t m_startStateID; // offset 0x58, size 0x10, align 4
    V_uuid_t m_endStateID; // offset 0x68, size 0x10, align 4
};
