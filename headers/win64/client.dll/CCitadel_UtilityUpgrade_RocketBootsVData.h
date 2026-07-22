#pragma once

class CCitadel_UtilityUpgrade_RocketBootsVData : public CitadelItemVData /*0x0*/  // sizeof 0x19B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x18B8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_InAirWatcherModifier; // offset 0x1998, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flMinHeadClearance; // offset 0x19A8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_19AC[0x4]; // offset 0x19AC
};
