#pragma once

class CPulseRuntimeMethodArg  // sizeof 0x80, align 0x10 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    CKV3MemberNameWithStorage m_Name; // offset 0x0, size 0x38, align 8
    CUtlString m_Description; // offset 0x38, size 0x8, align 8
    CPulseValueFullType m_Type; // offset 0x40, size 0x18, align 8
    char _pad_0058[0x28]; // offset 0x58
};
