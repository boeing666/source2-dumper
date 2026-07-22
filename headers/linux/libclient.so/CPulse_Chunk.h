#pragma once

class CPulse_Chunk  // sizeof 0x58, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    CUtlLeanVector< PGDInstruction_t > m_Instructions; // offset 0x0, size 0x10, align 8
    CUtlLeanVector< CPulse_RegisterInfo > m_Registers; // offset 0x10, size 0x10, align 8
    CUtlLeanVector< CPulse_InstructionDebug > m_InstructionDebugInfos; // offset 0x20, size 0x10, align 8
    char _pad_0030[0x28]; // offset 0x30
};
