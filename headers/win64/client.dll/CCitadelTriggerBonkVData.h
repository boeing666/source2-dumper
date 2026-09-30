#pragma once

class CCitadelTriggerBonkVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strBonkParticle; // offset 0x28, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strBonkSound; // offset 0x108, size 0x10, align 8 | MPropertyStartGroup
};
