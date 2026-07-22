#pragma once

class CCitadel_UtilityUpgrade_RocketBoosterVData : public CCitadel_UtilityUpgrade_RocketBootsVData /*0x0*/  // sizeof 0x1C98, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LandingParticle; // offset 0x19B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1A90, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DropDownStartParticle; // offset 0x1B70, size 0xE0, align 8
    CSoundEventName m_DropDownStartSound; // offset 0x1C50, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_LandingSound; // offset 0x1C60, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1C70, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BarrierModifier; // offset 0x1C80, size 0x10, align 8
    float32 m_flSlamEnabledTime; // offset 0x1C90, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1C94[0x4]; // offset 0x1C94
};
