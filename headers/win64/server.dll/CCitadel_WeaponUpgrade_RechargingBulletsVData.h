#pragma once

class CCitadel_WeaponUpgrade_RechargingBulletsVData : public CitadelItemVData /*0x0*/  // sizeof 0x15F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // offset 0x14F8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strProcSound; // offset 0x15D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ProcNotificationModifier; // offset 0x15E8, size 0x10, align 8 | MPropertyStartGroup
};
