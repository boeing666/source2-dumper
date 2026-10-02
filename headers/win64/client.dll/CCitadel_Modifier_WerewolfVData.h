#pragma once

class CCitadel_Modifier_WerewolfVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x9C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWerewolfAbilities; // offset 0x790, size 0x28, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StackingBuffModifier; // offset 0x7B8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffEndingParticle; // offset 0x7C8, size 0xE0, align 8 | MPropertyStartGroup
    ModelChange_t m_WerewolfModel; // offset 0x8A8, size 0xE8, align 8
    float32 m_flModelScale; // offset 0x990, size 0x4, align 4
    char _pad_0994[0x4]; // offset 0x994
    HeroCardOverride_t m_HeroCardOverride; // offset 0x998, size 0x30, align 8
};
