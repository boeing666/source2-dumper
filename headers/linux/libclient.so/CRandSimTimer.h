#pragma once

class CRandSimTimer : public CSimpleSimTimer /*0x0*/  // sizeof 0x10, align 0xFF [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flMinInterval; // offset 0x8, size 0x4, align 4
    float32 m_flMaxInterval; // offset 0xC, size 0x4, align 4
};
