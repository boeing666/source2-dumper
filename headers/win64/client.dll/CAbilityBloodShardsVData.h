#pragma once

class CAbilityBloodShardsVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1160, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyGroupName
};
