#pragma once

class CCitadel_TechUpgrade_CorpseExplosionVData : public CitadelItemVData /*0x0*/  // sizeof 0x15A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x14B0, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ExplosionModifier; // offset 0x1590, size 0x10, align 8 | MPropertyStartGroup
};
