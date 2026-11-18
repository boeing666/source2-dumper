#pragma once

class CPulse_RegisterInfo  // sizeof 0x60, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    CPulseType m_Type; // offset 0x0, size 0x18, align 8
    CKV3MemberNameWithStorage m_OriginName; // offset 0x18, size 0x38, align 8
    int32 m_nWrittenByInstruction; // offset 0x50, size 0x4, align 4
    int32 m_nLastReadByInstruction; // offset 0x54, size 0x4, align 4
    char _pad_0058[0x8]; // offset 0x58
};
