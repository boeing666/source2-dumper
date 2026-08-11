#pragma once

class CPulseCell_Outflow_CycleShuffled : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlVector< CPulse_OutflowConnection > m_Outputs; // offset 0x48, size 0x18, align 8
};
