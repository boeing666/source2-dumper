#pragma once

class CCitadel_Ability_Nano_CatFormVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1270, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofInParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PoofOutParticle; // offset 0x1150, size 0xE0, align 8
    CSoundEventName m_strMeow; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCatFormMeleeSwing; // offset 0x1240, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1250, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_DamageAmpModifier; // offset 0x1260, size 0x10, align 8
};
