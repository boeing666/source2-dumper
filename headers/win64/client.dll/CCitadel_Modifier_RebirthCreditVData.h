#pragma once

class CCitadel_Modifier_RebirthCreditVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RespawnParticle; // offset 0x840, size 0xE0, align 8
    CSoundEventName m_sDeploySound; // offset 0x920, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sRespawnSound; // offset 0x930, size 0x10, align 8
    float32 m_flRespawnLifePct; // offset 0x940, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRespawnDelay; // offset 0x944, size 0x4, align 4
};
