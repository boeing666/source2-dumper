#pragma once

class CCitadel_Ability_Unicorn_LuminousStrikeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1968, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TellParticleFriendly; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TellParticleEnemy; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TellParticle; // offset 0x1688, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyHitParticle; // offset 0x1768, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FluxStrikeCast; // offset 0x1848, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1928, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTellSound; // offset 0x1938, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x1948, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1958, size 0x10, align 8 | MPropertyStartGroup
};
