#pragma once

class CCitadelLootTableVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot MVDataAssociatedFile MVDataOverlayType}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlVector< LootTableEntry_t > m_vecEntries; // offset 0x30, size 0x18, align 8 | MPropertyAutoExpandSelf
    char _pad_0048[0x8]; // offset 0x48
};
