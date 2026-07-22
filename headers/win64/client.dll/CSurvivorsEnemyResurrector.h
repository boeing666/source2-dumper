#pragma once

class CSurvivorsEnemyResurrector : public CSurvivorsEnemy /*0x0*/  // sizeof 0x428, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x338]; // offset 0x0
    int32 m_nTotalResurrections; // offset 0x338, size 0x4, align 4
    int32 m_nResurrectionsRemaining; // offset 0x33C, size 0x4, align 4
    float32 m_flMovementSpeedMultiplierPerDeath; // offset 0x340, size 0x4, align 4
    bool m_bIsDyingWithResurrection; // offset 0x344, size 0x1, align 1
    bool m_bIsResurrecting; // offset 0x345, size 0x1, align 1
    char _pad_0346[0x2]; // offset 0x346
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sResurrectParticleName; // offset 0x348, size 0xE0, align 8
};
