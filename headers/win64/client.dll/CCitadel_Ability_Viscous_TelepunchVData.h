#pragma once

class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1CF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // offset 0x1AB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // offset 0x1B98, size 0xE0, align 8
    CSoundEventName m_PunchSound; // offset 0x1C78, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_PunchSelfSound; // offset 0x1C88, size 0x10, align 8
    CSoundEventName m_EnemyPortalSound; // offset 0x1C98, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // offset 0x1CA8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0x1CB8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FriendlyImpactModifier; // offset 0x1CC8, size 0x10, align 8
    float32 m_flEnemyPortalTelegraphTime; // offset 0x1CD8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSelfPortalTelegraphTime; // offset 0x1CDC, size 0x4, align 4
    float32 m_flWindupTime; // offset 0x1CE0, size 0x4, align 4
    float32 m_flAttackTime; // offset 0x1CE4, size 0x4, align 4
    float32 m_flGroundTraceOnPlayerHitDistance; // offset 0x1CE8, size 0x4, align 4
    float32 m_flPlayerCheckSphereRadius; // offset 0x1CEC, size 0x4, align 4
};
