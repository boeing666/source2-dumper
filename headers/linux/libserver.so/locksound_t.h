#pragma once

struct locksound_t  // sizeof 0x20, align 0x8 [vtable trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CGameSoundEventName sLockedSound; // offset 0x8, size 0x8, align 8
    CGameSoundEventName sUnlockedSound; // offset 0x10, size 0x8, align 8
    GameTime_t flwaitSound; // offset 0x18, size 0x4, align 255
    char _pad_001C[0x4]; // offset 0x1C
};
