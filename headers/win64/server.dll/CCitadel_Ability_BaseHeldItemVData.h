#pragma once

class CCitadel_Ability_BaseHeldItemVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1488, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flBaseFallrate; // offset 0x13A0, size 0x4, align 4
    char _pad_13A4[0x4]; // offset 0x13A4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ItemModel; // offset 0x13A8, size 0xE0, align 8 | MPropertyStartGroup
};
