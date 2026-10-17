#pragma once

class C_FuncTrackTrain : public C_BaseModelEntity /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    int32 m_nLongAxis; // offset 0xD00, size 0x4, align 4 | MNotSaved
    float32 m_flRadius; // offset 0xD04, size 0x4, align 4 | MNotSaved
    float32 m_flLineLength; // offset 0xD08, size 0x4, align 4 | MNotSaved
    char _pad_0D0C[0x4]; // offset 0xD0C
};
