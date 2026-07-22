#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0x9B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    int32 m_nLongAxis; // offset 0x9A8, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0x9AC, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0x9B0, size 0x4, align 4 | MNotSaved
    char _pad_09B4[0x4]; // offset 0x9B4
};
