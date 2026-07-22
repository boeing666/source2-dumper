#pragma once

class CAbility_Synth_Barrage_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B00, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BarrageCasterModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AmpModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1838, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1928, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1A08, size 0xE0, align 8
    CSoundEventName m_strProjectileLaunchSound; // offset 0x1AE8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAttackInterval; // offset 0x1AF8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1AFC[0x4]; // offset 0x1AFC
};
