#pragma once

class C_CommandContext  // sizeof 0xA0, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    bool needsprocessing; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x97]; // offset 0x1
    int32 command_number; // offset 0x98, size 0x4, align 4
    char _pad_009C[0x4]; // offset 0x9C
};
