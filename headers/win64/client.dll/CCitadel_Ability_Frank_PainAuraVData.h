#pragma once

class CCitadel_Ability_Frank_PainAuraVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraActive; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x18F8, size 0xE0, align 8
    CSoundEventName m_strTripSound; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x19E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AuraOffModifier; // offset 0x19F8, size 0x10, align 8
};
