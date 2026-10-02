#pragma once

class CCitadel_Modifier_RebirthCreditVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RespawnParticle; // offset 0x870, size 0xE0, align 8
    CSoundEventName m_sDeploySound; // offset 0x950, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sRespawnSound; // offset 0x960, size 0x10, align 8
    float32 m_flRespawnLifePct; // offset 0x970, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRespawnDelay; // offset 0x974, size 0x4, align 4
};
