#pragma once

class CCitadel_Ability_BaseHeldItemVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flBaseFallrate; // offset 0x13E8, size 0x4, align 4
    char _pad_13EC[0x4]; // offset 0x13EC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ItemModel; // offset 0x13F0, size 0xE0, align 8 | MPropertyStartGroup
};
