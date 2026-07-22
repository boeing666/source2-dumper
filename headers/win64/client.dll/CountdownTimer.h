#pragma once

class CountdownTimer  // sizeof 0x18, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_duration; // offset 0x8, size 0x4, align 4
    GameTime_t m_timestamp; // offset 0xC, size 0x4, align 255
    float32 m_timescale; // offset 0x10, size 0x4, align 4
    WorldGroupId_t m_nWorldGroupId; // offset 0x14, size 0x4, align 4
};
