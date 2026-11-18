#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0xBE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    int32 m_nLongAxis; // offset 0xBD8, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0xBDC, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0xBE0, size 0x4, align 4 | MNotSaved
    char _pad_0BE4[0x4]; // offset 0xBE4
};
