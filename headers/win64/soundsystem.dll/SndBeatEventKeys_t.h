#pragma once

struct SndBeatEventKeys_t  // sizeof 0x10, align 0x8 [vtable trivial_dtor] (soundsystem) {MGetKV3ClassDefaults MVDataBase MVDataNodeType}
{
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flKey; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_000C[0x4]; // offset 0xC
};
