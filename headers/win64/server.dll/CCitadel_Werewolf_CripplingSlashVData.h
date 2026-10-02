#pragma once

class CCitadel_Werewolf_CripplingSlashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1600, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1408, size 0x10, align 8
    CSoundEventName m_strSlashStart; // offset 0x1418, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashImpactSound; // offset 0x1428, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x1438, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashImpactEffect; // offset 0x1518, size 0xE0, align 8
    float32 m_flSlashForwardOffset; // offset 0x15F8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_15FC[0x4]; // offset 0x15FC
};
