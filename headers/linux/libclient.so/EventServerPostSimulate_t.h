#pragma once

struct EventServerPostSimulate_t : public EventSimulate_t /*0x0*/  // sizeof 0x30, align 0xFF [trivial_dtor] (client)
{
    char _pad_0000[0x2A]; // offset 0x0
    bool m_bLastTickBeforeClientUpdate; // offset 0x2A, size 0x1, align 1
    char _pad_002B[0x5]; // offset 0x2B
};
