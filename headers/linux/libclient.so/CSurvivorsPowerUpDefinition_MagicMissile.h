#pragma once

class CSurvivorsPowerUpDefinition_MagicMissile : public CSurvivorsPowerUpDefinition_ProjectileAttack /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    float32 m_flShardDamageMultiplier; // offset 0x798, size 0x4, align 4
    float32 m_flScepterDamageIncreasePerEnemyKilled; // offset 0x79C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sImpactParticle; // offset 0x7A0, size 0xE0, align 8
};
