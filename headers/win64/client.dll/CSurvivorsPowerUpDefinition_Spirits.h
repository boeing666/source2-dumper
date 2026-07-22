#pragma once

class CSurvivorsPowerUpDefinition_Spirits : public CSurvivorsPowerUpDefinition /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x6A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x6A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sExplosionParticle; // offset 0x780, size 0xE0, align 8
};
