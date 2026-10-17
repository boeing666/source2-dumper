#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0xB88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    int32 m_nLongAxis; // offset 0xB78, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0xB7C, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0xB80, size 0x4, align 4 | MNotSaved
    char _pad_0B84[0x4]; // offset 0xB84
};
