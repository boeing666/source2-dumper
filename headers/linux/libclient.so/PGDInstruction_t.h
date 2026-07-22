#pragma once

struct PGDInstruction_t  // sizeof 0x38, align 0x8 [trivial_dtor] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    PulseInstructionCode_t m_nCode; // offset 0x0, size 0x2, align 2
    char _pad_0002[0x2]; // offset 0x2
    PulseRuntimeVarIndex_t m_nVar; // offset 0x4, size 0x4, align 255
    PulseRuntimeRegisterIndex_t m_nReg0; // offset 0x8, size 0x2, align 255
    PulseRuntimeRegisterIndex_t m_nReg1; // offset 0xA, size 0x2, align 255
    PulseRuntimeRegisterIndex_t m_nReg2; // offset 0xC, size 0x2, align 255
    char _pad_000E[0x2]; // offset 0xE
    PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // offset 0x10, size 0x4, align 255
    PulseRuntimeChunkIndex_t m_nChunk; // offset 0x14, size 0x4, align 255
    int32 m_nDestInstruction; // offset 0x18, size 0x4, align 4
    PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // offset 0x1C, size 0x4, align 255
    PulseRuntimeConstantIndex_t m_nConstIdx; // offset 0x20, size 0x2, align 255
    PulseRuntimeDomainValueIndex_t m_nDomainValueIdx; // offset 0x22, size 0x2, align 255
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx; // offset 0x24, size 0x2, align 255
    char _pad_0026[0x12]; // offset 0x26
};
