#pragma once

class CPulseBreakpointLocation  // sizeof 0x28, align 0x8 [trivial_dtor] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseDocNodeID_t m_NodeID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    PulseSymbol_t m_SequencePoint; // offset 0x8, size 0x10, align 8
    PulseSymbol_t m_PortName; // offset 0x18, size 0x10, align 8
};
