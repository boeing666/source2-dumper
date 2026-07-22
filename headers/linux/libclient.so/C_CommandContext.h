#pragma once

class C_CommandContext  // sizeof 0xA8, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    bool needsprocessing; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x9F]; // offset 0x1
    int32 command_number; // offset 0xA0, size 0x4, align 4
    char _pad_00A4[0x4]; // offset 0xA4
};
