#pragma once

class C_CommandContext  // sizeof 0xB8, align 0xFF (client)
{
public:
    bool needsprocessing; // offset 0x0, size 0x1, align 1
    char _pad_0001[0xAF]; // offset 0x1
    int32 command_number; // offset 0xB0, size 0x4, align 4
    char _pad_00B4[0x4]; // offset 0xB4
};
