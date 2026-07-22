#pragma once

class CFuncFoliageVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletImpactParticle; // offset 0x28, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletExitParticle; // offset 0x108, size 0xE0, align 8
};
