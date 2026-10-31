#pragma once

class CCitadel_WeaponUpgrade_GlassCannonVData : public CitadelItemVData /*0x0*/  // sizeof 0x12A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CSoundEventName m_strDeathSound; // offset 0x1190, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStackSound; // offset 0x11A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // offset 0x11B0, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ProcNotificationModifier; // offset 0x1290, size 0x10, align 8 | MPropertyStartGroup
};
