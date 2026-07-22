#pragma once

class CSurvivorsEnemyAbsorber : public CSurvivorsEnemy /*0x0*/  // sizeof 0x438, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x338]; // offset 0x0
    float32 m_flPercentHealthAbsorbed; // offset 0x338, size 0x4, align 4
    float32 m_flBaseModelScale; // offset 0x33C, size 0x4, align 4
    float32 m_flModelScaleIncreasePerAbsorb; // offset 0x340, size 0x4, align 4
    float32 m_flMaxModelScale; // offset 0x344, size 0x4, align 4
    float32 m_flAbsorbRadius; // offset 0x348, size 0x4, align 4
    float32 m_flCurrentModelScale; // offset 0x34C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAbsorbParticleName; // offset 0x350, size 0xE0, align 8
    char _pad_0430[0x8]; // offset 0x430
};
