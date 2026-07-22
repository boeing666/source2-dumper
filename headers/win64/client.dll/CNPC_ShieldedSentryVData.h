#pragma once

class CNPC_ShieldedSentryVData : public CNPC_SimpleAnimatingAIVData /*0x0*/  // sizeof 0x458, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    float32 m_flZShootPostionOffset; // offset 0x108, size 0x4, align 4
    char _pad_010C[0x4]; // offset 0x10C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x110, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillExplosionParticle; // offset 0x1F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AutoDestructParticle; // offset 0x2D0, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DeployProgressModifier; // offset 0x3B0, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // offset 0x3C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_IntrinsicModifier; // offset 0x3D0, size 0x10, align 8
    CSoundEventName m_sSpawnSound; // offset 0x3E0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sKillExplosionSound; // offset 0x3F0, size 0x10, align 8
    CSoundEventName m_sLastHitSound; // offset 0x400, size 0x10, align 8
    CSoundEventName m_sTargetAcquiredLocalSound; // offset 0x410, size 0x10, align 8
    CSoundEventName m_sTargetAcquiredSound; // offset 0x420, size 0x10, align 8
    float32 m_flIdleTurnSpeed; // offset 0x430, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flIdleTurnAngles; // offset 0x434, size 0x4, align 4
    float32 m_flTrooperTakeDamageMult; // offset 0x438, size 0x4, align 4
    float32 m_flNeutralTakeDamageMulti; // offset 0x43C, size 0x4, align 4
    float32 m_flNotifyEventTime; // offset 0x440, size 0x4, align 4
    float32 m_flNearDeathDuration; // offset 0x444, size 0x4, align 4
    float32 m_flMinimapRevealTime; // offset 0x448, size 0x4, align 4
    float32 m_flMinLifetime; // offset 0x44C, size 0x4, align 4
    float32 m_flAttackThinkTime; // offset 0x450, size 0x4, align 4
    char _pad_0454[0x4]; // offset 0x454
};
