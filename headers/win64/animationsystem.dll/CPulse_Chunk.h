#pragma once

class CPulse_Chunk  // sizeof 0x60, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    CUtlLeanVector< PGDInstruction_t > m_Instructions; // offset 0x0, size 0x10, align 8
    CUtlLeanVector< CPulse_RegisterInfo > m_Registers; // offset 0x10, size 0x10, align 8
    CUtlLeanVector< CPulse_InstructionDebug > m_InstructionDebugInfos; // offset 0x20, size 0x10, align 8
    PulseRuntimeTempVarBankIndex_t m_nTempVarBank; // offset 0x30, size 0x2, align 255
    char _pad_0032[0x2E]; // offset 0x32
};
