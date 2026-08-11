#pragma once

class CFilterMassGreater : public CBaseFilter /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4E0]; // offset 0x0
    float32 m_fFilterMass; // offset 0x4E0, size 0x4, align 4
    char _pad_04E4[0x4]; // offset 0x4E4
};
