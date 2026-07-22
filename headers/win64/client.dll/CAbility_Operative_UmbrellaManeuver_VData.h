#pragma once

class CAbility_Operative_UmbrellaManeuver_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C98, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AirHangModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1908, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // offset 0x19E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x1AC8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1BA8, size 0xE0, align 8
    CSoundEventName m_ExplodeSound; // offset 0x1C88, size 0x10, align 8 | MPropertyStartGroup
};
