#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0x10A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    int32 m_nLongAxis; // offset 0x1098, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0x109C, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0x10A0, size 0x4, align 4 | MNotSaved
    char _pad_10A4[0x4]; // offset 0x10A4
};
