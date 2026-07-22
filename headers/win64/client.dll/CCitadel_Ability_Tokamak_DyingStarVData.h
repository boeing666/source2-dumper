#pragma once

class CCitadel_Ability_Tokamak_DyingStarVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A00, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameAuraParticle; // offset 0x18F8, size 0xE0, align 8
    CGlobalSymbol m_strInFlightAnimGraphParam; // offset 0x19D8, size 0x8, align 8 | MPropertyLeafSuggestionProviderFn
    CSoundEventName m_strExplodeSound; // offset 0x19E0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_InFlightModifier; // offset 0x19F0, size 0x10, align 8 | MPropertyStartGroup
};
