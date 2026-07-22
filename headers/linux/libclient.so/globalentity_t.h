#pragma once

struct globalentity_t  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    CUtlSymbol name; // offset 0x0, size 0x2, align 2 | MKV3TransferSaveOpsForField
    CUtlSymbol levelName; // offset 0x2, size 0x2, align 2 | MKV3TransferSaveOpsForField
    GLOBALESTATE state; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
    int32 counter; // offset 0x8, size 0x4, align 4
};
