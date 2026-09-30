#pragma once

class CCitadelVDataEconItem : public CVDataEconItem /*0x0*/  // sizeof 0x3F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x198]; // offset 0x0
    CUtlOrderedMap< HeroID_t, uint16 > m_mapEquipSlots; // offset 0x198, size 0x28, align 8
    CUtlVector< CEmbeddedSubclass< CCitadel_Modifier_Econ > > m_vecEquipModifiers; // offset 0x1C0, size 0x18, align 8
    CUtlOrderedMap< CUtlString, CVariantItemSlotDefinition > m_mapVariantSlots; // offset 0x1D8, size 0x28, align 8
    CHideoutPropDefinition m_HideoutProp; // offset 0x200, size 0x1F0, align 8
};
