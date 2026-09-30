#pragma once

class CCitadel_ArmorUpgrade_AutoCleanseVData : public CitadelItemVData /*0x0*/  // sizeof 0x15B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CSoundEventName m_strPurgeSound; // offset 0x14B0, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x14C0, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BarrierModifier; // offset 0x15A0, size 0x10, align 8 | MPropertyGroupName
};
