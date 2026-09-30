#pragma once

class CItemCapacitorVData : public CitadelItemVData /*0x0*/  // sizeof 0x1690, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x14C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x15A0, size 0xE0, align 8
    CSoundEventName m_PurgeSound; // offset 0x1680, size 0x10, align 8 | MPropertyStartGroup
};
