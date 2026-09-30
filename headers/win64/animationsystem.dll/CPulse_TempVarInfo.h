#pragma once

class CPulse_TempVarInfo  // sizeof 0x30, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseSymbol_t m_Name; // offset 0x0, size 0x10, align 8
    CPulseValueFullType m_Type; // offset 0x10, size 0x18, align 8
    PulseDocNodeID_t m_nEditorNodeID; // offset 0x28, size 0x4, align 255
    bool m_bIsObservable; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
};
