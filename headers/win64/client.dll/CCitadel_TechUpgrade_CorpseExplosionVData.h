#pragma once

class CCitadel_TechUpgrade_CorpseExplosionVData : public CitadelItemVData /*0x0*/  // sizeof 0x1270, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1180, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ExplosionModifier; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
};
