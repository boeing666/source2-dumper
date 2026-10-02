#pragma once

class CCitadel_ArmorUpgrade_AutoCleanseVData : public CitadelItemVData /*0x0*/  // sizeof 0x15F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CSoundEventName m_strPurgeSound; // offset 0x14F8, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x1508, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BarrierModifier; // offset 0x15E8, size 0x10, align 8 | MPropertyGroupName
};
