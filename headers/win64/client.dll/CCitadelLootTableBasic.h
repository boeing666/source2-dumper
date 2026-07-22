#pragma once

class CCitadelLootTableBasic  // sizeof 0x28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< LootTableEntry_t > m_vecEntries; // offset 0x8, size 0x18, align 8
    CUtlString m_strName; // offset 0x20, size 0x8, align 8
};
