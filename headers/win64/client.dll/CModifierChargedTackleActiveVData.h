#pragma once

class CModifierChargedTackleActiveVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TackleParticle; // offset 0x790, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PullEnemiesParticle; // offset 0x870, size 0xE0, align 8
};
