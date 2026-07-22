#pragma once

class CSurvivorsPowerUpDefinition_ProjectileAttack : public CSurvivorsPowerUpDefinition /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x6A0]; // offset 0x0
    ESurvivorsAttackTargeting m_eTargeting; // offset 0x6A0, size 0x4, align 4
    ESurvivorsAttackTargeting m_eBounceTargeting; // offset 0x6A4, size 0x4, align 4
    float32 m_flBounceMinimumLifetime; // offset 0x6A8, size 0x4, align 4
    float32 m_flSpawnMinimumLifetime; // offset 0x6AC, size 0x4, align 4
    bool m_bExpireOnWorldCollision; // offset 0x6B0, size 0x1, align 1
    bool m_bAbilityActiveWhileProjectileIsAlive; // offset 0x6B1, size 0x1, align 1
    char _pad_06B2[0x6]; // offset 0x6B2
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x6B8, size 0xE0, align 8
};
