#pragma once

struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t /*0x0*/  // sizeof 0x48, align 0xFF [trivial_dtor] (soundsystem)
{
    char _pad_0000[0x40]; // offset 0x0
    bool m_bLastTickBeforeClientUpdate; // offset 0x40, size 0x1, align 1
    char _pad_0041[0x7]; // offset 0x41
};
