#pragma once

class CCitadel_Werewolf_CripplingSlashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13C0, size 0x10, align 8
    CSoundEventName m_strSlashStart; // offset 0x13D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashImpactSound; // offset 0x13E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x13F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashImpactEffect; // offset 0x14D0, size 0xE0, align 8
    float32 m_flSlashForwardOffset; // offset 0x15B0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_15B4[0x4]; // offset 0x15B4
};
