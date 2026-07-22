#pragma once

class CNPC_FieldSentryVData : public CNPC_SimpleAnimatingAIVData /*0x0*/  // sizeof 0x330, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x108, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillExplosionParticle; // offset 0x1E8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DeployProgressModifier; // offset 0x2C8, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_sSpawnSound; // offset 0x2D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sKillExplosionSound; // offset 0x2E8, size 0x10, align 8
    CSoundEventName m_sTargetAcquiredLocalSound; // offset 0x2F8, size 0x10, align 8
    CSoundEventName m_sTargetAcquiredSound; // offset 0x308, size 0x10, align 8
    float32 m_flIdleTurnSpeed; // offset 0x318, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flIdleTurnAngles; // offset 0x31C, size 0x4, align 4
    float32 m_flTrooperTakeDamageMult; // offset 0x320, size 0x4, align 4
    float32 m_flNeutralTakeDamageMulti; // offset 0x324, size 0x4, align 4
    float32 m_flNotifyEventTime; // offset 0x328, size 0x4, align 4
    char _pad_032C[0x4]; // offset 0x32C
};
