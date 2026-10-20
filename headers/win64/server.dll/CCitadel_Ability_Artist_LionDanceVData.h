#pragma once

class CCitadel_Ability_Artist_LionDanceVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1298, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x1150, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AllyBuffModifier; // offset 0x1240, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1250, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPulseSound; // offset 0x1270, size 0x10, align 8
    bool m_bDebug; // offset 0x1280, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1281[0x3]; // offset 0x1281
    float32 m_flRecastTravelTime; // offset 0x1284, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // offset 0x1288, size 0x10, align 8 | MPropertyStartGroup
};
