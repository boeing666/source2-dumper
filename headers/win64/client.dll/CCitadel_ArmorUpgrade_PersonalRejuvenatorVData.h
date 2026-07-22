#pragma once

class CCitadel_ArmorUpgrade_PersonalRejuvenatorVData : public CitadelItemVData /*0x0*/  // sizeof 0x1A98, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // offset 0x18B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RespawnParticle; // offset 0x1998, size 0xE0, align 8
    CSoundEventName m_sDeploySound; // offset 0x1A78, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sRespawnSound; // offset 0x1A88, size 0x10, align 8
};
