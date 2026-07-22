#pragma once

class CSurvivorsPowerUpDefinition_LandMine : public CSurvivorsPowerUpDefinition /*0x0*/  // sizeof 0xBE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x6A0]; // offset 0x0
    float32 m_flScepterVacuumRadius; // offset 0x6A0, size 0x4, align 4
    float32 m_flScepterVacuumDistance; // offset 0x6A4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x6A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sExplosionParticle; // offset 0x788, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sStasisTrapParticle; // offset 0x868, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sStasisTrapExplosion; // offset 0x948, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRemoteMineParticle; // offset 0xA28, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRemoteMineExplosion; // offset 0xB08, size 0xE0, align 8
};
