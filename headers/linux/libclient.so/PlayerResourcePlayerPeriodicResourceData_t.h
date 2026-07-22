#pragma once

struct PlayerResourcePlayerPeriodicResourceData_t  // sizeof 0x40, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    PeriodicResourceID_t m_unPeriodicResourceID; // offset 0x30, size 0x4, align 255
    uint32 m_unPeriodicResourceMax; // offset 0x34, size 0x4, align 4
    uint32 m_unPeriodicResourceRemaining; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
