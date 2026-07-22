#pragma once

struct SoundCommand_t  // sizeof 0x20, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    float32 m_time; // offset 0x8, size 0x4, align 4
    float32 m_deltaTime; // offset 0xC, size 0x4, align 4
    soundcommands_t m_command; // offset 0x10, size 0x4, align 4
    float32 m_value; // offset 0x14, size 0x4, align 4
    char _pad_0018[0x8]; // offset 0x18
};
