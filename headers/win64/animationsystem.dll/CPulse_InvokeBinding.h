#pragma once

class CPulse_InvokeBinding  // sizeof 0xB0, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseRegisterMap_t m_RegisterMap; // offset 0x0, size 0x30, align 255
    PulseSymbol_t m_FuncName; // offset 0x30, size 0x10, align 8
    PulseRuntimeCellIndex_t m_nCellIndex; // offset 0x40, size 0x4, align 255
    PulseRuntimeChunkIndex_t m_nSrcChunk; // offset 0x44, size 0x4, align 255
    int32 m_nSrcInstruction; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x64]; // offset 0x4C
};
