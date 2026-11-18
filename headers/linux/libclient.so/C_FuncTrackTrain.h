#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0xD78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    int32 m_nLongAxis; // offset 0xD68, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0xD6C, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0xD70, size 0x4, align 4 | MNotSaved
    char _pad_0D74[0x4]; // offset 0xD74
};
