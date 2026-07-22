#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0xFC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    int32 m_nLongAxis; // offset 0xFB0, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0xFB4, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0xFB8, size 0x4, align 4 | MNotSaved
    char _pad_0FBC[0x4]; // offset 0xFBC
};
