#pragma once

class CSurvivorsPowerUp_AreaAttack : public CSurvivorsPowerUp /*0x0*/  // sizeof 0x800, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x608, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sHitImpactParticle; // offset 0x6E8, size 0xE0, align 8
    CUtlVector< CSurvivorsPowerUpDamageTickInfo > m_vecQueuedDamageTicks; // offset 0x7C8, size 0x18, align 8
    ESurvivorsAreaAttackOrigin m_eOrigin; // offset 0x7E0, size 0x4, align 4
    float32 m_flRemoveParticleTimeDelay; // offset 0x7E4, size 0x4, align 4
    CUtlVector< CSurvivorsAttackParticleInfo > m_vecAttackParticles; // offset 0x7E8, size 0x18, align 8
};
