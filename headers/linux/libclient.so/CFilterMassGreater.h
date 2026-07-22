#pragma once

class CFilterMassGreater : public CBaseFilter /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    float32 m_fFilterMass; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
