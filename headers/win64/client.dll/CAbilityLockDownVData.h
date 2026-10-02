#pragma once

class CAbilityLockDownVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x14C8, size 0x10, align 8 | MPropertyGroupName
};
