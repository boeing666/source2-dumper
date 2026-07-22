#pragma once

struct entitytable_t  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults}
{
    int32 id; // offset 0x0, size 0x4, align 4
    CEntityIndex edictindex; // offset 0x4, size 0x4, align 4
    CEntityIndex saveentityindex; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x8]; // offset 0xC
    bool bWasSaved; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    SaveRestoreTableFlags_t flags; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CUtlSymbolLarge classname; // offset 0x20, size 0x8, align 8
    CUtlSymbolLarge globalname; // offset 0x28, size 0x8, align 8
    CUtlSymbolLarge entityname; // offset 0x30, size 0x8, align 8
    Vector landmarkModelSpace; // offset 0x38, size 0xC, align 4
    char _pad_0044[0x4]; // offset 0x44
    CEntityKeyValues* m_pPrecacheEntityKeys; // offset 0x48, size 0x8, align 8
};
