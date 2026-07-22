#pragma once

struct ItemDropData_t  // sizeof 0x28, align 0xFF (server)
{
    CUtlVector< CUtlString > sItemNames; // offset 0x0, size 0x18, align 8
    float32 flChance; // offset 0x18, size 0x4, align 4
    int32 nReqLevel; // offset 0x1C, size 0x4, align 4
    bool bMustBeChampion; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
};
