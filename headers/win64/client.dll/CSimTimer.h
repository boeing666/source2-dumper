#pragma once

class CSimTimer : public CSimpleSimTimer /*0x0*/  // sizeof 0xC, align 0xFF [trivial_dtor] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flInterval; // offset 0x8, size 0x4, align 4
};
