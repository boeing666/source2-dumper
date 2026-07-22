#pragma once

class CPulseCell_InlineNodeSkipSelector : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPulseFunctionHiddenInTool}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    PulseDocNodeID_t m_nFlowNodeID; // offset 0x48, size 0x4, align 255
    bool m_bAnd; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
    PulseSelectorOutflowList_t m_PassOutflow; // offset 0x50, size 0x18, align 8
    CPulse_OutflowConnection m_FailOutflow; // offset 0x68, size 0x48, align 255
};
