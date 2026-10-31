#pragma once

class CCitadel_Modifier_StanceActiveVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapNewAbilities; // offset 0x798, size 0x28, align 8 | MPropertyStartGroup
    ModelChange_t m_StanceModel; // offset 0x7C0, size 0xE8, align 8 | MPropertyStartGroup
    float32 m_flModelScale; // offset 0x8A8, size 0x4, align 4
    char _pad_08AC[0x4]; // offset 0x8AC
    HeroCardOverride_t m_HeroCardOverride; // offset 0x8B0, size 0x30, align 8
};
