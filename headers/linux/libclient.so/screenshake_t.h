#pragma once

struct screenshake_t  // sizeof 0x38, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    GameTime_t endtime; // offset 0x0, size 0x4, align 255
    float32 duration; // offset 0x4, size 0x4, align 4
    float32 amplitude; // offset 0x8, size 0x4, align 4
    float32 frequency; // offset 0xC, size 0x4, align 4
    GameTime_t nextShake; // offset 0x10, size 0x4, align 255
    Vector offset; // offset 0x14, size 0xC, align 4
    float32 angle; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    Vector direction; // offset 0x28, size 0xC, align 4
    uint8 nShakeType; // offset 0x34, size 0x1, align 1
    char _pad_0035[0x3]; // offset 0x35
};
