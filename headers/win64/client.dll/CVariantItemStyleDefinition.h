#pragma once

class CVariantItemStyleDefinition  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    VariantItemSlotStyleID_t m_unSlotStyleID; // offset 0x8, size 0x1, align 255
    char _pad_0009[0x7]; // offset 0x9
    CUtlString m_strStyleLocName; // offset 0x10, size 0x8, align 8
    CPanoramaImageName m_strSwatchImage; // offset 0x18, size 0x10, align 8
    CUtlVector< CEmbeddedSubclass< CCitadel_Modifier_Econ > > m_vecStyleEquipModifiers; // offset 0x28, size 0x18, align 8
};
