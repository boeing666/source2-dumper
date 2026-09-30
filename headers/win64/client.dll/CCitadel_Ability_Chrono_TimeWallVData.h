#pragma once

class CCitadel_Ability_Chrono_TimeWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1750, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallChargeParticle; // offset 0x1490, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitParticle; // offset 0x1570, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitTimerParticle; // offset 0x1650, size 0xE0, align 8
    CSoundEventName m_strWallCreated; // offset 0x1730, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargeUpSound; // offset 0x1740, size 0x10, align 8
};
