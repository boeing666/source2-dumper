#pragma once

class CCitadel_Ability_Nurse_AdrenalineRush_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1280, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageSpiritParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrashDamageSpiritParticle; // offset 0x1180, size 0xE0, align 8
    CSoundEventName m_strDeferredDamageTickSound; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDamageSpiritCreatedSound; // offset 0x1270, size 0x10, align 8
};
