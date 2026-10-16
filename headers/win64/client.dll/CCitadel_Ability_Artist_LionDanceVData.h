#pragma once

class CCitadel_Ability_Artist_LionDanceVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1610, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x14C8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AllyBuffModifier; // offset 0x15B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x15C8, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x15D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPulseSound; // offset 0x15E8, size 0x10, align 8
    bool m_bDebug; // offset 0x15F8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_15F9[0x3]; // offset 0x15F9
    float32 m_flRecastTravelTime; // offset 0x15FC, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x1600, size 0x10, align 8 | MPropertyStartGroup
};
