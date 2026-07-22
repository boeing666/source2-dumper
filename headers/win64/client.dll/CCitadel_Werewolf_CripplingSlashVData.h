#pragma once

class CCitadel_Werewolf_CripplingSlashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A30, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1838, size 0x10, align 8
    CSoundEventName m_strSlashStart; // offset 0x1848, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashImpactSound; // offset 0x1858, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x1868, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashImpactEffect; // offset 0x1948, size 0xE0, align 8
    float32 m_flSlashForwardOffset; // offset 0x1A28, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1A2C[0x4]; // offset 0x1A2C
};
