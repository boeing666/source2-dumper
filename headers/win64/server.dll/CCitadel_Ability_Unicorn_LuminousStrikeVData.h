#pragma once

class CCitadel_Ability_Unicorn_LuminousStrikeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1920, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TellParticleFriendly; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TellParticleEnemy; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TellParticle; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyHitParticle; // offset 0x1720, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FluxStrikeCast; // offset 0x1800, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x18E0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTellSound; // offset 0x18F0, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x1900, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1910, size 0x10, align 8 | MPropertyStartGroup
};
