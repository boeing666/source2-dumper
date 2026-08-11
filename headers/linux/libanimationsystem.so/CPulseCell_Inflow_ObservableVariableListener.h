#pragma once

class CPulseCell_Inflow_ObservableVariableListener : public CPulseCell_Inflow_BaseEntrypoint /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReference; // offset 0x80, size 0x2, align 255
    bool m_bSelfReference; // offset 0x82, size 0x1, align 1
    char _pad_0083[0x5]; // offset 0x83
};
