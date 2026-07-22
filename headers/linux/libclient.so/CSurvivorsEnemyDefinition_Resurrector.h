#pragma once

class CSurvivorsEnemyDefinition_Resurrector : public CSurvivorsEnemyDefinition /*0x0*/  // sizeof 0x370, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x284]; // offset 0x0
    int32 m_nNumResurrectionTimes; // offset 0x284, size 0x4, align 4
    float32 m_flMovementSpeedMultiplierPerDeath; // offset 0x288, size 0x4, align 4
    char _pad_028C[0x4]; // offset 0x28C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sResurrectParticleName; // offset 0x290, size 0xE0, align 8
};
