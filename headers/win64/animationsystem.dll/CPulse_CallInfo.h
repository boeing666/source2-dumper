#pragma once

class CPulse_CallInfo  // sizeof 0x58, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseSymbol_t m_PortName; // offset 0x0, size 0x10, align 8
    PulseDocNodeID_t m_nEditorNodeID; // offset 0x10, size 0x4, align 255
    char _pad_0014[0x4]; // offset 0x14
    PulseRegisterMap_t m_RegisterMap; // offset 0x18, size 0x30, align 255
    PulseDocNodeID_t m_CallMethodID; // offset 0x48, size 0x4, align 255
    PulseRuntimeChunkIndex_t m_nSrcChunk; // offset 0x4C, size 0x4, align 255
    int32 m_nSrcInstruction; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
};
