#pragma once

class CPulse_Constant  // sizeof 0x30, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    CPulseValueFullType m_Type; // offset 0x0, size 0x18, align 8
    KeyValues3 m_Value; // offset 0x18, size 0x10, align 8
    char _pad_0028[0x8]; // offset 0x28
};
