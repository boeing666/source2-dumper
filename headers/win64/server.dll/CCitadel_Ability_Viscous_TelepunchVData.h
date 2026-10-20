#pragma once

class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1548, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // offset 0x1310, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // offset 0x13F0, size 0xE0, align 8
    CSoundEventName m_PunchSound; // offset 0x14D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_PunchSelfSound; // offset 0x14E0, size 0x10, align 8
    CSoundEventName m_EnemyPortalSound; // offset 0x14F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // offset 0x1500, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0x1510, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FriendlyImpactModifier; // offset 0x1520, size 0x10, align 8
    float32 m_flEnemyPortalTelegraphTime; // offset 0x1530, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSelfPortalTelegraphTime; // offset 0x1534, size 0x4, align 4
    float32 m_flWindupTime; // offset 0x1538, size 0x4, align 4
    float32 m_flAttackTime; // offset 0x153C, size 0x4, align 4
    float32 m_flGroundTraceOnPlayerHitDistance; // offset 0x1540, size 0x4, align 4
    float32 m_flPlayerCheckSphereRadius; // offset 0x1544, size 0x4, align 4
};
