#pragma once

class CCitadel_HeroTestOrbSpawnerVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x2E0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    int32 m_iGoldValue; // offset 0x28, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpawnRate; // offset 0x2C, size 0x4, align 4
    float32 m_flFirstSpawnTime; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x38, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flModelScale; // offset 0x118, size 0x4, align 4
    float32 m_flSpawnOffset; // offset 0x11C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // offset 0x120, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle; // offset 0x200, size 0xE0, align 8
};
