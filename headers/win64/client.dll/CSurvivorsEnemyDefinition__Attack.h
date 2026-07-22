#pragma once

class CSurvivorsEnemyDefinition::Attack  // sizeof 0x118, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticleName; // offset 0x0, size 0xE0, align 8
    float32 m_flDamage; // offset 0xE0, size 0x4, align 4
    float32 m_flAttackCooldown; // offset 0xE4, size 0x4, align 4
    float32 m_flSpeed; // offset 0xE8, size 0x4, align 4
    float32 m_flRange; // offset 0xEC, size 0x4, align 4
    float32 m_flMaxDistance; // offset 0xF0, size 0x4, align 4
    float32 m_flLifeTime; // offset 0xF4, size 0x4, align 4
    float32 m_flAttackOffsetUp; // offset 0xF8, size 0x4, align 4
    float32 m_flAttackOffsetForward; // offset 0xFC, size 0x4, align 4
    float32 m_flRadius; // offset 0x100, size 0x4, align 4
    GameActivity_t m_activity; // offset 0x104, size 0x4, align 4
    float32 m_flAttackPoint; // offset 0x108, size 0x4, align 4
    bool m_bHasIndicator; // offset 0x10C, size 0x1, align 1
    char _pad_010D[0x3]; // offset 0x10D
    float32 m_flSpawnDelay; // offset 0x110, size 0x4, align 4
    SurvivorsAttackIndicatorShape_t m_eIndicatorShape; // offset 0x114, size 0x4, align 4
};
