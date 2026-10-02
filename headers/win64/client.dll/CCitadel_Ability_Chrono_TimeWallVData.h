#pragma once

class CCitadel_Ability_Chrono_TimeWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1798, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallChargeParticle; // offset 0x14D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitParticle; // offset 0x15B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitTimerParticle; // offset 0x1698, size 0xE0, align 8
    CSoundEventName m_strWallCreated; // offset 0x1778, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargeUpSound; // offset 0x1788, size 0x10, align 8
};
