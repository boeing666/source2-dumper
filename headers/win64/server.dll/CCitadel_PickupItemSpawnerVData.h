#pragma once

class CCitadel_PickupItemSpawnerVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x310, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x28, size 0xE0, align 8 | MPropertyGroupName MPropertyDescription
    float32 m_flModelScale; // offset 0x108, size 0x4, align 4
    char _pad_010C[0x4]; // offset 0x10C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InactiveParticle; // offset 0x110, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParticle; // offset 0x1F0, size 0xE0, align 8
    CUtlVector< BreakablePowerupDropDefinition_t > m_vecPrimaryPickups; // offset 0x2D0, size 0x18, align 8 | MPropertyStartGroup
    CSubclassName< 0 > m_sSinglePickupOverride; // offset 0x2E8, size 0x10, align 8 | MPropertyDescription
    float32 m_flInitialSpawnTime; // offset 0x2F8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flRespawnTime; // offset 0x2FC, size 0x4, align 4
    float32 m_flInitialSpawnTimeTest; // offset 0x300, size 0x4, align 4 | MPropertyDescription
    float32 m_flRespawnTimeTest; // offset 0x304, size 0x4, align 4
    bool m_bRespawnTimerStartsAfterPickup; // offset 0x308, size 0x1, align 1
    char _pad_0309[0x7]; // offset 0x309
};
