#pragma once

struct SndBeatEventKeyedFloats_t : public SndBeatEventKeys_t /*0x0*/  // sizeof 0x18, align 0x8 [vtable trivial_dtor] (soundsystem) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x10]; // offset 0x0
    float32 m_flFloat; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0014[0x4]; // offset 0x14
};
