#pragma once

class CCitadel_Modifier_Necro_SpawnZombies_AreaVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonModifier; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonDecayModifier; // offset 0x880, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SpawningInModifier; // offset 0x890, size 0x10, align 8
    bool m_bDebug; // offset 0x8A0, size 0x1, align 1 | MPropertyStartGroup
    char _pad_08A1[0x3]; // offset 0x8A1
    float32 m_flRandomSpawnOffsetPerSummon; // offset 0x8A4, size 0x4, align 4
    float32 m_flZombieSpawnVerticalOffset; // offset 0x8A8, size 0x4, align 4
    float32 m_flZombieSpawnForwardOffset; // offset 0x8AC, size 0x4, align 4
    float32 m_flZombieSpawnNavMeshSearchDistance; // offset 0x8B0, size 0x4, align 4
    float32 m_flForwardWalkDistance; // offset 0x8B4, size 0x4, align 4
    float32 m_flWalkDestinationRandomness; // offset 0x8B8, size 0x4, align 4
    float32 m_flSpawningInTime; // offset 0x8BC, size 0x4, align 4
};
