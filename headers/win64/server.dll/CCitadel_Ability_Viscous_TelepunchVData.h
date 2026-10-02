#pragma once

class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // offset 0x1688, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // offset 0x1768, size 0xE0, align 8
    CSoundEventName m_PunchSound; // offset 0x1848, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_PunchSelfSound; // offset 0x1858, size 0x10, align 8
    CSoundEventName m_EnemyPortalSound; // offset 0x1868, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // offset 0x1878, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0x1888, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FriendlyImpactModifier; // offset 0x1898, size 0x10, align 8
    float32 m_flEnemyPortalTelegraphTime; // offset 0x18A8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSelfPortalTelegraphTime; // offset 0x18AC, size 0x4, align 4
    float32 m_flWindupTime; // offset 0x18B0, size 0x4, align 4
    float32 m_flAttackTime; // offset 0x18B4, size 0x4, align 4
    float32 m_flGroundTraceOnPlayerHitDistance; // offset 0x18B8, size 0x4, align 4
    float32 m_flPlayerCheckSphereRadius; // offset 0x18BC, size 0x4, align 4
};
