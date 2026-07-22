#pragma once

class CSurvivorsPowerUp_MagicMissile : public CSurvivorsPowerUp_ProjectileAttack /*0x0*/  // sizeof 0x900, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x730]; // offset 0x0
    int32 m_nEnemiesKilled; // offset 0x730, size 0x4, align 4
    float32 m_flShardDamageMultiplier; // offset 0x734, size 0x4, align 4
    float32 m_flScepterDamageIncreasePerEnemyKilled; // offset 0x738, size 0x4, align 4
    char _pad_073C[0x4]; // offset 0x73C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sPhysicalWeaknessEffect; // offset 0x740, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sImpactParticle; // offset 0x820, size 0xE0, align 8
};
