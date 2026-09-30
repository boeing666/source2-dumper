#pragma once

class CCitadel_Ability_Nano_CatFormVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofInParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofOutParticle; // offset 0x1480, size 0xE0, align 8
    CSoundEventName m_strMeow; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCatFormMeleeSwing; // offset 0x1570, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1580, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_DamageAmpModifier; // offset 0x1590, size 0x10, align 8
};
