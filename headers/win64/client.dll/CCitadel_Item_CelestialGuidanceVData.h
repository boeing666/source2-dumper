#pragma once

class CCitadel_Item_CelestialGuidanceVData : public CitadelItemVData /*0x0*/  // sizeof 0x15F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x14F8, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x1508, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strPurgeSound; // offset 0x15E8, size 0x10, align 8 | MPropertyStartGroup
};
