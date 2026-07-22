#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0xF48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    int32 m_nLongAxis; // offset 0xF38, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0xF3C, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0xF40, size 0x4, align 4 | MNotSaved
    char _pad_0F44[0x4]; // offset 0xF44
};
