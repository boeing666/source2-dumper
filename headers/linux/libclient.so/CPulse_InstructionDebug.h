#pragma once

class CPulse_InstructionDebug  // sizeof 0x18, align 0x8 [trivial_dtor] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseDocNodeID_t m_nFlowNodeID; // offset 0x0, size 0x4, align 255
    PulseDocNodeID_t m_nValueNodeID; // offset 0x4, size 0x4, align 255
    PulseSymbol_t m_SequencePointName; // offset 0x8, size 0x10, align 8
};
