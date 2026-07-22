#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    int32 m_nLongAxis; // offset 0xA88, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0xA8C, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0xA90, size 0x4, align 4 | MNotSaved
    char _pad_0A94[0x4]; // offset 0xA94
};
