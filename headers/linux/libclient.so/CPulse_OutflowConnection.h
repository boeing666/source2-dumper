#pragma once

class CPulse_OutflowConnection  // sizeof 0x48, align 0xFF (pulse_runtime_lib)
{
public:
    PulseSymbol_t m_SourceOutflowName; // offset 0x0, size 0x10, align 8
    PulseRuntimeChunkIndex_t m_nDestChunk; // offset 0x10, size 0x4, align 255
    int32 m_nInstruction; // offset 0x14, size 0x4, align 4
    PulseRegisterMap_t m_OutflowRegisterMap; // offset 0x18, size 0x30, align 255
};
