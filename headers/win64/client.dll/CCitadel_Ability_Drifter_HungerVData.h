#pragma once

class CCitadel_Ability_Drifter_HungerVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x11A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // offset 0x10A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HungerTargetKillParticle; // offset 0x10B0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strStackGainedSound; // offset 0x1190, size 0x10, align 8 | MPropertyStartGroup
};
