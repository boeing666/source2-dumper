#pragma once

class CCitadel_Ability_Chrono_TimeWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1420, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallChargeParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitTimerParticle; // offset 0x1320, size 0xE0, align 8
    CSoundEventName m_strWallCreated; // offset 0x1400, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargeUpSound; // offset 0x1410, size 0x10, align 8
};
