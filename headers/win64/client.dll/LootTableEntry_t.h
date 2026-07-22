#pragma once

struct LootTableEntry_t  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults}
{
    ELootTableEntryType m_eType; // offset 0x0, size 0x4, align 4 | MPropertyDescription MPropertyFlattenIntoParentRow MPropertyFlattenStretchFactor
    char _pad_0004[0x4]; // offset 0x4
    CSubclassName< 6 > m_strNestedLootTable; // offset 0x8, size 0x10, align 8 | MPropertyDescription MPropertyFlattenIntoParentRow MPropertyFlattenStretchFactor MPropertySuppressExpr
    char _pad_0018[0x8]; // offset 0x18
    CSubclassName< 4 > m_strItem; // offset 0x20, size 0x10, align 8 | MPropertyDescription MPropertyFlattenIntoParentRow MPropertyFlattenStretchFactor MPropertySuppressExpr MPropertyLeafChoiceProviderFn
    float32 m_flWeight; // offset 0x30, size 0x4, align 4 | MPropertyDescription MPropertyFlattenIntoParentRow MPropertyFlattenIncludeLabel
    int32 m_nRarity; // offset 0x34, size 0x4, align 4 | MPropertyDescription MPropertyFlattenIntoParentRow MPropertyFlattenIncludeLabel
};
