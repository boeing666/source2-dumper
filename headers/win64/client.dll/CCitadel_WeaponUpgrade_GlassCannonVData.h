#pragma once

class CCitadel_WeaponUpgrade_GlassCannonVData : public CitadelItemVData /*0x0*/  // sizeof 0x1608, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CSoundEventName m_strDeathSound; // offset 0x14F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStackSound; // offset 0x1508, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // offset 0x1518, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ProcNotificationModifier; // offset 0x15F8, size 0x10, align 8 | MPropertyStartGroup
};
