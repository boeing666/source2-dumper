#pragma once

class CPulseCell_Inflow_BaseEntrypoint : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    PulseRuntimeChunkIndex_t m_EntryChunk; // offset 0x48, size 0x4, align 255
    char _pad_004C[0x4]; // offset 0x4C
    PulseRegisterMap_t m_RegisterMap; // offset 0x50, size 0x30, align 255
};
