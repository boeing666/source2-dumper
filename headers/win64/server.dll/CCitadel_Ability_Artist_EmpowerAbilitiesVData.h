#pragma once

class CCitadel_Ability_Artist_EmpowerAbilitiesVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_CastModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1090, size 0x10, align 8
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapEmpoweredAbilities; // offset 0x10A0, size 0x28, align 8 | MPropertyStartGroup
};
