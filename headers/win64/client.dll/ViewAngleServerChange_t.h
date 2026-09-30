#pragma once

struct ViewAngleServerChange_t  // sizeof 0x48, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    FixAngleSet_t nType; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x3]; // offset 0x31
    QAngle qAngle; // offset 0x34, size 0xC, align 4
    uint32 nIndex; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
};
