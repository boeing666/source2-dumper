#pragma once

class CCitadel_Modifier_RebirthCreditVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x938, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RespawnParticle; // offset 0x830, size 0xE0, align 8
    CSoundEventName m_sDeploySound; // offset 0x910, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sRespawnSound; // offset 0x920, size 0x10, align 8
    float32 m_flRespawnLifePct; // offset 0x930, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRespawnDelay; // offset 0x934, size 0x4, align 4
};
