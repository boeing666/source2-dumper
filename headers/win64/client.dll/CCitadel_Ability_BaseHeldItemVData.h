#pragma once

class CCitadel_Ability_BaseHeldItemVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1158, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    float32 m_flBaseFallrate; // offset 0x1070, size 0x4, align 4
    char _pad_1074[0x4]; // offset 0x1074
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ItemModel; // offset 0x1078, size 0xE0, align 8 | MPropertyStartGroup
};
