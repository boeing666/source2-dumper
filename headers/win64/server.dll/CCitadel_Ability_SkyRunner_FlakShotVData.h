#pragma once

class CCitadel_Ability_SkyRunner_FlakShotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1160, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x1150, size 0x10, align 8 | MPropertyStartGroup
};
