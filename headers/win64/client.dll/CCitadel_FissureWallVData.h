#pragma once

class CCitadel_FissureWallVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    int32 m_nMeleeHits; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CSoundEventName m_HitSound; // offset 0x30, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_DestroySound; // offset 0x40, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle; // offset 0x50, size 0xE0, align 8 | MPropertyStartGroup
};
