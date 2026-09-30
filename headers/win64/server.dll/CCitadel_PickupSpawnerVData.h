#pragma once

class CCitadel_PickupSpawnerVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CSubclassName< 0 > m_sPickup; // offset 0x28, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flSpawnDelay; // offset 0x38, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flSpawnDelayTest; // offset 0x3C, size 0x4, align 4 | MPropertyDescription
    float32 m_flRespawnTime; // offset 0x40, size 0x4, align 4 | MPropertyDescription
    float32 m_flRespawnTimeTest; // offset 0x44, size 0x4, align 4 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x48, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flModelScale; // offset 0x128, size 0x4, align 4
    char _pad_012C[0x4]; // offset 0x12C
};
