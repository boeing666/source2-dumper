#pragma once

struct FuncMoverTransitionRecord_t  // sizeof 0x1C, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    int32 nId; // offset 0x0, size 0x4, align 4
    CHandle< CPathMover > hSourcePath; // offset 0x4, size 0x4, align 4
    float32 flSourceT; // offset 0x8, size 0x4, align 4
    bool bSourceReversing; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    CHandle< CPathMover > hDestPath; // offset 0x10, size 0x4, align 4
    float32 flDestT; // offset 0x14, size 0x4, align 4
    bool bDestReversing; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x3]; // offset 0x19
};
