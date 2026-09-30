#pragma once

class CAbility_Synth_Barrage_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1688, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BarrageCasterModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AmpModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13C0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x13D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x14B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1590, size 0xE0, align 8
    CSoundEventName m_strProjectileLaunchSound; // offset 0x1670, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAttackInterval; // offset 0x1680, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1684[0x4]; // offset 0x1684
};
