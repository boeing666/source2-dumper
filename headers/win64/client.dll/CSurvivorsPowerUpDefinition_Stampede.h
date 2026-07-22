#pragma once

class CSurvivorsPowerUpDefinition_Stampede : public CSurvivorsPowerUpDefinition /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x6A0]; // offset 0x0
    float32 m_flMovementSpeedPercentDamageMultiplier; // offset 0x6A0, size 0x4, align 4
    char _pad_06A4[0x4]; // offset 0x6A4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x6A8, size 0xE0, align 8
};
