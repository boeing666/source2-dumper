#pragma once

struct KeyGroup_t  // sizeof 0x10, align 0xFF [trivial_ctor trivial_dtor] (soundsystem)
{
    uint8 nCenterNote; // offset 0x0, size 0x1, align 1
    uint8 nMinNote; // offset 0x1, size 0x1, align 1
    uint8 nMaxNote; // offset 0x2, size 0x1, align 1
    uint8 nNumVelocityZones; // offset 0x3, size 0x1, align 1
    char _pad_0004[0x4]; // offset 0x4
    VelocityZone_t* pVelocityZones; // offset 0x8, size 0x8, align 8
};
