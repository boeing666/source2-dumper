#pragma once

class CCitadel_Ability_Nano_CatFormVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofInParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofOutParticle; // offset 0x18F8, size 0xE0, align 8
    CSoundEventName m_strMeow; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCatFormMeleeSwing; // offset 0x19E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x19F8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_DamageAmpModifier; // offset 0x1A08, size 0x10, align 8
};
