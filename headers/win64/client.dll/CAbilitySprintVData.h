#pragma once

class CAbilitySprintVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1498, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprintParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strSprintSound; // offset 0x1480, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flSprintAccMS; // offset 0x1490, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1494[0x4]; // offset 0x1494
};
