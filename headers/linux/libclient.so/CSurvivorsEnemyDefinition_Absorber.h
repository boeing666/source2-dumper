#pragma once

class CSurvivorsEnemyDefinition_Absorber : public CSurvivorsEnemyDefinition /*0x0*/  // sizeof 0x378, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x284]; // offset 0x0
    float32 m_flModelScaleIncreasePerAbsorb; // offset 0x284, size 0x4, align 4
    float32 m_flMaxModelScale; // offset 0x288, size 0x4, align 4
    float32 m_flAbsorbRadius; // offset 0x28C, size 0x4, align 4
    float32 m_flPercentHealthAbsorbed; // offset 0x290, size 0x4, align 4
    char _pad_0294[0x4]; // offset 0x294
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAbsorbParticleName; // offset 0x298, size 0xE0, align 8
};
