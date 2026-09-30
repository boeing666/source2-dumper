#pragma once

class CCitadel_WeaponUpgrade_SpellslingerHeadshots_VData : public CitadelItemVData /*0x0*/  // sizeof 0x15A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_HeadshotDebuffModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x14C0, size 0xE0, align 8 | MPropertyStartGroup
};
