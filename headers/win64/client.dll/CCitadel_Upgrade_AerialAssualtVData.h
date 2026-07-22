#pragma once

class CCitadel_Upgrade_AerialAssualtVData : public CitadelItemVData /*0x0*/  // sizeof 0x19A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_WatcherModifier; // offset 0x18B8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x18C8, size 0xE0, align 8 | MPropertyStartGroup
};
