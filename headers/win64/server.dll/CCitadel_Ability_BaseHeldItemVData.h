#pragma once

class CCitadel_Ability_BaseHeldItemVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1168, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flBaseFallrate; // offset 0x1080, size 0x4, align 4
    char _pad_1084[0x4]; // offset 0x1084
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ItemModel; // offset 0x1088, size 0xE0, align 8 | MPropertyStartGroup
};
