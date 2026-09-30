#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    int32 m_nLongAxis; // offset 0xBB0, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0xBB4, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0xBB8, size 0x4, align 4 | MNotSaved
    char _pad_0BBC[0x4]; // offset 0xBBC
};
