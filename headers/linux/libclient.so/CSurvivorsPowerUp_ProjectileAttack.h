#pragma once

class CSurvivorsPowerUp_ProjectileAttack : public CSurvivorsPowerUp /*0x0*/  // sizeof 0x730, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x608, size 0xE0, align 8
    ESurvivorsAttackTargeting m_eTargeting; // offset 0x6E8, size 0x4, align 4
    ESurvivorsAttackTargeting m_eBounceTargeting; // offset 0x6EC, size 0x4, align 4
    float32 m_flSpawnMinimumLifetime; // offset 0x6F0, size 0x4, align 4
    float32 m_flBounceMinimumLifetime; // offset 0x6F4, size 0x4, align 4
    bool m_bExpireOnWorldCollision; // offset 0x6F8, size 0x1, align 1
    bool m_bAbilityActiveWhileProjectileIsActive; // offset 0x6F9, size 0x1, align 1
    char _pad_06FA[0x2]; // offset 0x6FA
    int32 m_nActiveProjectilesToTrack; // offset 0x6FC, size 0x4, align 4
    CUtlVector< float32 > m_vecQueuedProjectileTimers; // offset 0x700, size 0x18, align 8
    CUtlVector< SurvivorsUnitID_t > m_vecTargetExclusions; // offset 0x718, size 0x18, align 8
};
