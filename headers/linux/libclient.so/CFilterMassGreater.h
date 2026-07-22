#pragma once

class CFilterMassGreater : public CBaseFilter /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7B0]; // offset 0x0
    float32 m_fFilterMass; // offset 0x7B0, size 0x4, align 4
    char _pad_07B4[0x4]; // offset 0x7B4
};
