#pragma once

class CCitadel_Ability_Mirage_FireBeetles_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1480, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StatStolenDebuffModifier; // offset 0x1490, size 0x10, align 8
    CSoundEventName m_strHitConfirmSound; // offset 0x14A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWorldImpactSound; // offset 0x14B0, size 0x10, align 8
};
