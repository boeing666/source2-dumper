#pragma once

class CPulse_RegisterInfo  // sizeof 0x60, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseRuntimeRegisterIndex_t m_nReg; // offset 0x0, size 0x2, align 255
    char _pad_0002[0x6]; // offset 0x2
    CPulseValueFullType m_Type; // offset 0x8, size 0x18, align 8
    CKV3MemberNameWithStorage m_OriginName; // offset 0x20, size 0x38, align 8
    int32 m_nWrittenByInstruction; // offset 0x58, size 0x4, align 4
    int32 m_nLastReadByInstruction; // offset 0x5C, size 0x4, align 4
};
