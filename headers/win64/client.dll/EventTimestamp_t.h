#pragma once

struct EventTimestamp_t  // sizeof 0x10, align 0xFF [vtable trivial_dtor] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    uint32 m_rtTimestamp; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
