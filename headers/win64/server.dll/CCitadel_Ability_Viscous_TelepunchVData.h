#pragma once

class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1878, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // offset 0x1720, size 0xE0, align 8
    CSoundEventName m_PunchSound; // offset 0x1800, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_PunchSelfSound; // offset 0x1810, size 0x10, align 8
    CSoundEventName m_EnemyPortalSound; // offset 0x1820, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // offset 0x1830, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0x1840, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FriendlyImpactModifier; // offset 0x1850, size 0x10, align 8
    float32 m_flEnemyPortalTelegraphTime; // offset 0x1860, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSelfPortalTelegraphTime; // offset 0x1864, size 0x4, align 4
    float32 m_flWindupTime; // offset 0x1868, size 0x4, align 4
    float32 m_flAttackTime; // offset 0x186C, size 0x4, align 4
    float32 m_flGroundTraceOnPlayerHitDistance; // offset 0x1870, size 0x4, align 4
    float32 m_flPlayerCheckSphereRadius; // offset 0x1874, size 0x4, align 4
};
