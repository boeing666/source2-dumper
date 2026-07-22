#pragma once

class CCitadel_Ability_UltComboVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // offset 0x18F8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x19E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x19F8, size 0x10, align 8
    float32 m_flKillCheckWindow; // offset 0x1A08, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageInterval; // offset 0x1A0C, size 0x4, align 4
};
