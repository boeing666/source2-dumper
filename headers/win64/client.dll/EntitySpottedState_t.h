#pragma once

struct EntitySpottedState_t  // sizeof 0x18, align 0xFF [vtable] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    bool m_bSpotted; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
    uint32[2] m_bSpottedByMask; // offset 0xC, size 0x8, align 4
    char _pad_0014[0x4]; // offset 0x14
};
