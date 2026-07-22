#pragma once

struct EventServerPostSimulate_t : public EventSimulate_t /*0x0*/  // sizeof 0x38, align 0xFF [trivial_dtor] (soundsystem)
{
    char _pad_0000[0x30]; // offset 0x0
    bool m_bLastTickBeforeClientUpdate; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x7]; // offset 0x31
};
