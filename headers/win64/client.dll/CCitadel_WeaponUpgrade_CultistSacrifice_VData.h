#pragma once

class CCitadel_WeaponUpgrade_CultistSacrifice_VData : public CitadelItemVData /*0x0*/  // sizeof 0x15B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strOffCooldownSound; // offset 0x14C0, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastTargetEffect; // offset 0x14D0, size 0xE0, align 8 | MPropertyStartGroup
};
