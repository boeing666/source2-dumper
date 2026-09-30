#pragma once

class CVariantItemSlotDefinition  // sizeof 0x68, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    VariantItemSlotID_t m_unSlotID; // offset 0x8, size 0x4, align 255
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_strSlotLocName; // offset 0x10, size 0x8, align 8
    CUtlOrderedMap< CUtlString, CVariantItemStyleDefinition > m_mapVariantStyles; // offset 0x18, size 0x28, align 8
    char _pad_0040[0x28]; // offset 0x40
};
