#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0xC20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    int32 m_nLongAxis; // offset 0xC10, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0xC14, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0xC18, size 0x4, align 4 | MNotSaved
    char _pad_0C1C[0x4]; // offset 0xC1C
};
