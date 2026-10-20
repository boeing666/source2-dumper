#pragma once

class CCitadel_WeaponUpgrade_CultistSacrifice_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1280, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1180, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strOffCooldownSound; // offset 0x1190, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastTargetEffect; // offset 0x11A0, size 0xE0, align 8 | MPropertyStartGroup
};
