#pragma once

class CCitadel_Modifier_Necro_SpawnZombies_AreaVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonModifier; // offset 0x830, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonDecayModifier; // offset 0x840, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SpawningInModifier; // offset 0x850, size 0x10, align 8
    bool m_bDebug; // offset 0x860, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0861[0x3]; // offset 0x861
    float32 m_flRandomSpawnOffsetPerSummon; // offset 0x864, size 0x4, align 4
    float32 m_flZombieSpawnVerticalOffset; // offset 0x868, size 0x4, align 4
    float32 m_flZombieSpawnForwardOffset; // offset 0x86C, size 0x4, align 4
    float32 m_flZombieSpawnNavMeshSearchDistance; // offset 0x870, size 0x4, align 4
    float32 m_flForwardWalkDistance; // offset 0x874, size 0x4, align 4
    float32 m_flWalkDestinationRandomness; // offset 0x878, size 0x4, align 4
    float32 m_flSpawningInTime; // offset 0x87C, size 0x4, align 4
};
