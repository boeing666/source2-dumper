#pragma once

class CCitadel_Modifier_WerewolfVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x998, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWerewolfAbilities; // offset 0x760, size 0x28, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StackingBuffModifier; // offset 0x788, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffEndingParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    ModelChange_t m_WerewolfModel; // offset 0x878, size 0xE8, align 8
    float32 m_flModelScale; // offset 0x960, size 0x4, align 4
    char _pad_0964[0x4]; // offset 0x964
    HeroCardOverride_t m_HeroCardOverride; // offset 0x968, size 0x30, align 8
};
