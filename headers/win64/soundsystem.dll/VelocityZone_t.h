#pragma once

struct VelocityZone_t  // sizeof 0x14, align 0xFF [trivial_ctor trivial_dtor] (soundsystem)
{
    uint8 nMaxVel; // offset 0x0, size 0x1, align 1
    uint8 nNextSelection; // offset 0x1, size 0x1, align 1
    uint8 nNumSamples; // offset 0x2, size 0x1, align 1
    char _pad_0003[0x1]; // offset 0x3
    uint32[4] pSamples; // offset 0x4, size 0x10, align 4
};
