#pragma once

struct AIExtendedSaveHeader_t  // sizeof 0x88, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    int16 nVersion; // offset 0x0, size 0x2, align 2
    char _pad_0002[0x2]; // offset 0x2
    uint32 nFlags; // offset 0x4, size 0x4, align 4
    char[128] szSequence; // offset 0x8, size 0x80, align 1
};
