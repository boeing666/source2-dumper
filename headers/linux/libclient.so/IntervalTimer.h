#pragma once

class IntervalTimer  // sizeof 0x10, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    GameTime_t m_timestamp; // offset 0x8, size 0x4, align 255
    WorldGroupId_t m_nWorldGroupId; // offset 0xC, size 0x4, align 4
};
