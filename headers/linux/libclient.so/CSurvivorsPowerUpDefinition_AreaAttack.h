#pragma once

class CSurvivorsPowerUpDefinition_AreaAttack : public CSurvivorsPowerUpDefinition /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x6A0]; // offset 0x0
    ESurvivorsAreaAttackOrigin m_eOrigin; // offset 0x6A0, size 0x4, align 4
    float32 m_flRemoveParticleTimeDelay; // offset 0x6A4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x6A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sHitImpactParticle; // offset 0x788, size 0xE0, align 8
};
